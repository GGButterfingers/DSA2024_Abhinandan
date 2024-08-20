import random as rnd 

def count(permutation):
    sum = 0
    for i in range(len(permutation)):
       if permutation[i] == i:
           sum += 1
    return sum

def experiment(n, trials):
    total = 0
    for _ in range(trials):
        permutation = list(range(n))
        rnd.shuffle(permutation)      
        total += count(permutation)

    return total / trials

n = 1000  
trials = 10000  

coinciding = experiment(n, trials)
print(f"The probability of a number coinciding with its index ON AVERAGE is: {n}: {coinciding}")
