import random as rnd 

n = int(input("Enter a limit: "))

i,count = n,0
while i != 1:
    print(i)
    i = rnd.randint(1,i)
    count += 1

print("No. of steps taken is: " + str(count))