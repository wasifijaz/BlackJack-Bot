from blackjackFunctions import *
import random

state_size = 260
action_size = 4

Q = np.zeros((state_size, action_size))

no_ace_states = []
ace_states = []

for i in [4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]:
    for j in [2,3,4,5,6,7,8,9,10,11]:
        no_ace_states.append([i,j,0])

for i in [12,13,14,15,16,17,18,19,20]:
    for j in [2,3,4,5,6,7,8,9,10,11]:
        ace_states.append([i,j,1])

all_states = no_ace_states + ace_states

states_dict = {}

for i in np.arange(len(all_states)):
    states_dict[str(all_states[i])] = i

def playGame(rounds):
    s = shoe()
    rnd = 0
    epsilon = 0.8
    gamma = 0.35
    record = []
    
    while rnd < rounds:
        if rnd % (rounds//90) == 0:
            epsilon *= 0.9
            print(f"{rnd} rounds done", end = '\r')
        if s.shufflePoint < 234:
            record.append(playRound(s, epsilon, gamma))
        else:
            s.shuffleShoe()
            record.append(playRound(s, epsilon, gamma))
        rnd += 1  

def playRound(s, epsilon, gamma):
    h = hand()
    dh = hand()
    reward = 10
    queue = []
    dealHand(h, dh, s)
    split = False

    while h.handSum < 21:
        state = assignState(h, dh)
        curr_action = chooseAction(state, Q, epsilon)
        queue.append([state, curr_action])
        
        if curr_action == 0:    #hit
            hit(h, s)
        elif curr_action == 1:  #stand
            break
        elif curr_action == 2:  #double
            reward *= 2
            hit(h, s)
            break
        elif curr_action == 3:  #split
            split = True
            reward *= 1
            break
    
    dealerPlay(dh, s)
    if split == True:
        result = 0
    else:
        result = determineOutcome(h, dh)
    
    if result == 0:     #loss
        reward *= -1
    elif result == 2:   #push
        reward = 0
        
    updateQ(queue, reward, gamma)
    return result

def updateQ(queue, reward, gamma):
    i = 0
    lr = 0.0005
    while queue:
        curr = queue.pop()
        curr_state = curr[0]
        curr_action = curr[1]

        rowNum = states_dict[curr_state]
        
        Q[rowNum][curr_action] += lr * (reward * (gamma ** i))
        i += 2
        

def chooseAction(state, Q, epsilon):
    value = np.random.choice(a = np.arange(0, 2), p = [1-epsilon, epsilon])
    if value == 1:  #random choice epsilon percent of the time
        action = random.choice([0,1,2,3])
    else:   #choose best option from q table 1-epsilon percent of the time
        options = Q[states_dict[state]]
        action = actionIndex(options)   
    return action

def whatAction(lst):
    action = np.argmax(lst)
    if action == 0:
        print("hit")
    elif action == 1:
        print("stay")
    elif action == 2:
        print("double")
    elif action == 3:
        print("split")
    print(lst)

playGame(9000000)
# save q table to file
