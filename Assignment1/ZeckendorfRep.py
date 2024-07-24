from Fibonacci import Fibonacci
from FibonacciFloor import FloorFibonacci

limit = int(input("Enter the limit till where you want the sequence: "))
fib_seq = Fibonacci(limit)
print(fib_seq)
ele = int(input("Enter the element: "))
sums = []
i = 0
temp = ele

while temp != 0:
    pivot = FloorFibonacci(fib_seq,temp)
    temp -= pivot
    sums.append(pivot)

print(str(ele) + " can be represented as:")
for i in range (0,len(sums)):
    print(str(sums[i]) + " + ",end="")