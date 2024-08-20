import random as rnd

def find_group(element, list_of_lists):
    for lst in list_of_lists:
        if element in lst:
            return lst
    return []

def ClockSolitaire():

    deck = list(range(52))
    for i in range(6):
        rnd.shuffle(deck)

    groups = [deck[i::13] for i in range(13)]

    cards_accessed = 0
    current_group = 12

    while True:
        if not groups[current_group]:
            return False
        card = groups[current_group].pop()
        cards_accessed += 1
        next_group = card % 13
        if cards_accessed == 52:
            return True
        current_group = next_group

def simulate(n = 1000000):
    wins = sum(ClockSolitaire() for _ in range(n))
    return wins / n

print(simulate())
