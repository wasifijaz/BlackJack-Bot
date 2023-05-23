import numpy as np
import matplotlib as plt
import random

class hand:
    def __init__(self):
        self.cards = []
        self.handSum = 0
        self.ace_count = 0
    
    def addCard(self, card):
        new_card = card
        if (new_card.ace):
            self.ace_count += 1
        
        self.cards.append(card)
        self.handSum += card.value

        if self.handSum > 21 and self.ace_count > 0:
            self.handSum -= 10
            self.ace_count -= 1

        
    def resetHand(self):
        self.cards = []
        self.handSum = 0
        
        
class card:
    def __init__(self, value, suit):
        self.value = value
        self.suit = suit
        self.ace = (value == 11)
        
    def __repr__(self):
        return str(self.value) + self.suit[0]

class shoe:    
    def __init__(self):
        self.cards = []
        self.shufflePoint = 0
        for _ in np.arange(6):
            for i in [11,2,3,4,5,6,7,8,9,10,10,10,10]:
                for j in ['clubs', 'hearts', 'spades', 'diamonds']:
                    c = card(i,j)
                    self.cards.append(c)
        random.shuffle(self.cards)
                
    def getNext(self):
        card = self.cards.pop(0)
        self.cards.append(card)
        self.shufflePoint += 1
        return card
    
    def shuffleShoe(self):
        random.shuffle(self.cards)
        self.shufflePoint = 0

def hit(hand, shoe):
    hand.addCard(shoe.getNext())

def dealHand(h, dh, s):
    hit(h, s)
    hit(dh, s)
    hit(h, s)
    hit(dh, s)

def dealerPlay(dh, s):
    while (dh.handSum < 17):
        hit(dh, s)

state_size = 270
action_size = 4

Q = np.zeros((state_size, action_size))



def assignState(h, dh):
    current_sum = h.handSum
    dealer_upcard = dh.cards[0].value
    aces = h.ace_count

    return str([current_sum, dealer_upcard, aces])

def determineOutcome(h, dh): #0 is loss, 1 is win, 2 is push
    mySum = h.handSum
    dealerSum = dh.handSum

    if mySum > 21:
        return 0
    elif dealerSum > 21:
        return 1 
    elif mySum < dealerSum: 
        return 0
    elif mySum == dealerSum:
        return 2
    else:
        return 1


def duplicates(lst, item):
    return [i for i, x in enumerate(lst) if x == item]

def actionIndex(options):
    if len(set(options)) == len(options):
        action = np.argmax(options)
    else:
        max_indices = duplicates(options, np.max(options))
        action = np.random.choice(max_indices)
    return action