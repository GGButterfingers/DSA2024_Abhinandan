import random as rnd

n = int(input("Enter a limit: "))

r1 = [rnd.randint(0,n) for i in range (0,10)]
r2 = [rnd.uniform(0,n) for i in range (0,10)]
r3 = [rnd.betavariate(1,n) for i in range (0,10)]
r4 = [rnd.expovariate(lambd=1.0) for i in range (0,10)]
r5 = [rnd.gammavariate(2,n) for i in range (0,10)]
r6 = [rnd.gauss(mu=0.0,sigma=1.0) for i in range (0,10)]

print("The following is a random list of 10 numbers between 0 and the limit: ")
print(r1)

print("The following is a random list of 10 numbers that follows the Uniform Distribution: ")
print(r2)

print("The following is a random list of 10 numbers that follows the Beta Distribution: ")
print(r3)

print("The following is a random list of 10 numbers that follows the Exponential Distribution: ")
print(r4)

print("The following is a random list of 10 numbers that follows the Gamma Distribution: ")
print(r5)

print("The following is a random list of 10 numbers that follows the Normal Distribution: ")
print(r6)