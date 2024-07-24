function_calls = 0  # Global counter to keep track of function calls

def fibonacci(n):
    global function_calls
    function_calls += 1
    if n <= 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

def generate_fibonacci(limit):
    fib_numbers = []
    i = 0
    while i != limit:
        fib = fibonacci(i)
        fib_numbers.append(fib)
        i += 1
    return fib_numbers

if __name__ == "__main__":
    limit = int(input("Enter the limit for Fibonacci numbers: "))
    fib_numbers = generate_fibonacci(limit)
    print("Fibonacci numbers up to the limit:", fib_numbers)
    print("Total number of function calls:", function_calls)
