import numpy as np
import pandas as pd
import heapq
import ast

# QTable = np.load(r"C:/Users/wasif/Downloads/Blackack-Bot-Final/test.npy")


def percentChange(current, previous): #returns percent change between current and previous
    if current == previous:
        return 0
    try:
        return (abs(current - previous) / previous) * 100.0
    except ZeroDivisionError:
        return float('inf')
    
#-----------------------#given a row in the Q table, returns action that the model believes is best (max)------------------------------------------------
def whichAction(row): 
    action = np.argmax(row)
    if action == 0:
        return 'Hit'
    elif action == 1:
        return 'Stand'
    elif action == 2:
        return 'Double'
    elif action == 3:
        return "Split"

#-----------------------nth best action according to the model within percent% of max action------------------------------------------------
def nextAction(row, n, percent = 0):
    if n > 4: #only 4 possible actions
        return "Error, only 4 actions are possible (n>4)"
    
    action = heapq.nlargest(n, range(len(row)), key = row.__getitem__)[n-1] #index of nth max
    action_val = heapq.nlargest(n, row)[1] #value of nth max
    
    if percent: #if we want to check that the nth action is within percent% of the max action
        if percentChange(action_val, np.max(row)) > percent: 
            return "No"
        
    if action == 0:
        return 'Hit (c)'
    elif action == 1:
        return 'Stand (c)'
    elif action == 2:
        return 'Double (c)'
    elif action == 3 and n == 2:
        return "Split"
    elif action == 3 and n == 3:
        return "Split (c)"
    
#-----------------------highlight cells with color according to action------------------------------------------------
def highlight_actions(val):
    if val == 'Hit':
        color = 'green'
    elif val == 'Stand':
        color = 'brown'
    elif val == 'Double':
        color = 'blue'
    elif val == 'Split':
        color = 'goldenrod'
    elif val == 'Hit (c)':
        color = 'darkgreen'
    elif val == 'Stand (c)':
        color = 'firebrick'
    elif val == 'Double (c)':
        color = 'mediumblue'
    elif val == 'Split (c)':
        color = 'darkgoldenrod'
    else:
        color = 'white'
    return 'background-color: %s' % color

#-------------------given a state in Q table, returns [row, column] coordinates in basic_strategy table----------------
def state_to_BS(state): 
    state_lst = ast.literal_eval(state)
    hand_total = state_lst[0]
    dealer_upcard = state_lst[1]
    if dealer_upcard == 11:
        dealer_upcard = 'A'
        
    ace = state_lst[2]
    
    similar = state_lst[3]
    
    BS_column = dealer_upcard
    
    if ace:
        if hand_total == 12:
            hand_total = 'A,A'
        else:
            hand_total = 'A,%i'%(hand_total-11)
    if similar:
        if hand_total == 4:
            hand_total = '2,2'
        if hand_total == 6:
            hand_total = '3,3'
        if hand_total == 8:
            hand_total = '4,4'
        if hand_total == 10:
            hand_total = '5,5'
        if hand_total == 12:
            hand_total = '6,6'
        if hand_total == 14:
            hand_total = '7,7'
        if hand_total == 16:
            hand_total = '8,8'
        if hand_total == 18:
            hand_total = '9,9'
        if hand_total == 20:
            hand_total = '10,10'
        
    BS_row = hand_total  
    
    return [BS_row, BS_column]

#-------------------generate dictionary with keys = row number in Q, and value = corresponding state-----------------
def statesfunction():    
    no_ace_states = []
    ace_states = []
    similar_states = []

    for i in [4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]:
        for j in [2,3,4,5,6,7,8,9,10,11]:
            no_ace_states.append([i,j,0,0])

    for i in [12,13,14,15,16,17,18,19,20]:
        for j in [2,3,4,5,6,7,8,9,10,11]:
            ace_states.append([i,j,1,0])
            
    for i in [4,6,8,10,12,14,16,18,20]:
        for j in [2,3,4,5,6,7,8,9,10,11]:
            similar_states.append([i,j,0,1])

    all_states = no_ace_states + ace_states + similar_states

    
    return all_states

#-------------------generates basic strategy table according to Q and with any corrections desired-----------------
def generateBS(correct_bs, Q, basic_strategy, correction = 'None'):
    all_states = statesfunction()
    states_dict = {}

    for i in np.arange(len(all_states)):
        states_dict[i] = str(all_states[i])

    for num, row in enumerate(Q):
        state = states_dict[num]
        action = whichAction(row)
        bs_coords = state_to_BS(state)
        
        if correction != 'None':
            if correction == 'within 0.5%':
                p = 0.005
            elif correction == 'second action':
                p = 0
                
            if action != correct_bs.loc[bs_coords[0], bs_coords[1]]:
                #either just the next action ('second action') or next action within p% ('within 0.5%')
                second_action = nextAction(row, 2, p)
                if second_action != "No":
                    action = second_action

            if action == "Split" and action != correct_bs.loc[bs_coords[0], bs_coords[1]]:
                action = nextAction(row, 3)
        
        basic_strategy.loc[bs_coords[0], bs_coords[1]] = action
    return basic_strategy.style.applymap(highlight_actions)

#generate table with correct strategy
def generateStrategy():
    dealer_upcard = [2,3,4,5,6,7,8,9,10,'A']
    no_ace_hand = [4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
    ace_hand = ['A,A', 'A,2', 'A,3', 'A,4', 'A,5', 'A,6', 'A,7', 'A,8', 'A,9']
    similar_hand = ['2,2', '3,3', '4,4', '5,5', '6,6', '7,7', '8,8', '9,9','10,10']
    basic_strategy = pd.DataFrame(columns = dealer_upcard, index = no_ace_hand)
    basic_strategy_ace = pd.DataFrame(columns = dealer_upcard, index = ace_hand)
    basic_strategy_similar = pd.DataFrame(columns = dealer_upcard, index = similar_hand)
    # correct_bs_1 = basic_strategy.append(basic_strategy_ace)
    # correct_bs = correct_bs_1.append(basic_strategy_similar)
    correct_bs = pd.concat([basic_strategy, basic_strategy_ace, basic_strategy_similar])

    correct_bs.loc[4] = "Hit"
    correct_bs.loc[5] = "Hit"
    correct_bs.loc[6] = "Hit"
    correct_bs.loc[7] = "Hit"
    correct_bs.loc[8] = "Hit"
    correct_bs.loc[9] = ["Hit", "Double", "Double", "Double", "Double", "Hit", "Hit", "Hit", "Hit", "Hit"]
    correct_bs.loc[10] = ["Double","Double","Double","Double","Double","Double","Double","Double","Hit", "Hit"]
    correct_bs.loc[11] = ["Double","Double","Double","Double","Double","Double","Double","Double","Double", "Hit"]
    correct_bs.loc[12] = ["Hit", "Hit", "Stand", "Stand", "Stand", "Hit","Hit","Hit","Hit","Hit"]
    correct_bs.loc[13] = ["Stand","Stand","Stand","Stand","Stand","Hit","Hit","Hit","Hit","Hit"]
    correct_bs.loc[14] = ["Stand","Stand","Stand","Stand","Stand","Hit","Hit","Hit","Hit","Hit"]
    correct_bs.loc[15] = ["Stand","Stand","Stand","Stand","Stand","Hit","Hit","Hit","Hit","Hit"]
    correct_bs.loc[16] = ["Stand","Stand","Stand","Stand","Stand","Hit","Hit","Hit","Hit","Hit"]
    correct_bs.loc[17] = "Stand"
    correct_bs.loc[18] = "Stand"
    correct_bs.loc[19] = "Stand"
    correct_bs.loc[20] = "Stand"
    correct_bs.loc['A,2'] = ["Hit", "Hit", "Hit", "Double", "Double", "Hit","Hit","Hit","Hit","Hit"]
    correct_bs.loc['A,3'] = ["Hit", "Hit", "Hit", "Double", "Double", "Hit","Hit","Hit","Hit","Hit"]
    correct_bs.loc['A,4'] = ["Hit", "Hit", "Double", "Double", "Double", "Hit","Hit","Hit","Hit","Hit"]
    correct_bs.loc['A,5'] = ["Hit", "Hit", "Double", "Double", "Double", "Hit","Hit","Hit","Hit","Hit"]
    correct_bs.loc['A,6'] = ["Hit", "Double", "Double", "Double", "Double", "Hit","Hit","Hit","Hit","Hit"]
    correct_bs.loc['A,7'] = ["Stand", "Double", "Double", "Double", "Double", "Stand","Stand","Hit","Hit","Hit"]
    correct_bs.loc['A,8'] = ["Stand", "Stand", "Stand", "Stand", "Double", "Stand","Stand","Stand","Stand","Stand"]
    correct_bs.loc['A,9'] = "Stand"
    correct_bs.loc['A,A'] = "Split"
    correct_bs.loc['2,2'] = ["Split", "Split", "Split", "Split", "Split", "Split","Hit","Hit","Hit","Hit"]
    correct_bs.loc['3,3'] = ["Split", "Split", "Split", "Split", "Split", "Split","Hit","Hit","Hit","Hit"]
    correct_bs.loc['4,4'] = ["Hit", "Hit", "Hit", "Split", "Split", "Hit","Hit","Hit","Hit","Hit"]
    correct_bs.loc['5,5'] = ["Double", "Double", "Double", "Double", "Double", "Double","Double","Double","Hit","Hit"]
    correct_bs.loc['6,6'] = ["Split", "Split", "Split", "Split", "Split", "Hit","Hit","Hit","Hit","Hit"]
    correct_bs.loc['7,7'] = ["Split", "Split", "Split", "Split", "Split", "Split","Hit","Hit","Hit","Hit"]
    correct_bs.loc['8,8'] = "Split"
    correct_bs.loc['9,9'] = ["Split", "Split", "Split", "Split", "Split", "Stand","Split","Split","Stand","Stand"]
    correct_bs.loc['10,10'] = "Stand"
    correct_bs.style.applymap(highlight_actions)

def revDict():
    all_states = statesfunction()
    generateStrategy()
    
    reverse_states_dict = {}

    for i in np.arange(len(all_states)):
        reverse_states_dict[str(all_states[i])] = i
    
    return reverse_states_dict

def checkQrow(state):
    QTable = np.load(r"test.npy")
    reverse_states_dict = revDict()
    print(reverse_states_dict)
    row_num = reverse_states_dict[state]

    return QTable[row_num]