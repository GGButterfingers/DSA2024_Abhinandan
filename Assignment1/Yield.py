def infinite_fibonacci():
    a, b = 1, 1
    while True:
        yield a
        a, b = b, a + b

# Create a generator object
fib_gen = infinite_fibonacci()

# Get the first n Fibonacci numbers
n = int(input("Enter the number of Fibonacci numbers to be printed: "))

for _ in range(n):
    print(next(fib_gen), end=" ")