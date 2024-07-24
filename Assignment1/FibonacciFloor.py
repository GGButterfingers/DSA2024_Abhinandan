# main.py

from Fibonacci import Fibonacci  # Import the Fibonacci function from fibonacci.py

def FloorFibonacci(fib_seq, ele):

    n = len(fib_seq)
    left = 0
    right = n-1
    found = False

    if ele > fib_seq[right]:
        return fib_seq[right]
    
    else:
        while (left != right) and not found:
            mid = (left + right)//2
            if (fib_seq[mid] <= ele) and (fib_seq[mid + 1] > ele):
                left = mid
                found = True
            elif (fib_seq[mid] < ele):
                left = mid + 1
            elif (fib_seq[mid] > ele):
                right = mid
    
        if found == True:
            return fib_seq[left]
        else:
            return -1

if __name__ == "__main__":

    limit = int(input("Enter the limit till where you want to generate the Fibonacci sequence: "))
    fib_sequence = Fibonacci(limit)

    print("The Fibonacci sequence is:")
    print(fib_sequence)

    element = int(input("Enter the element: "))
    
    req = FloorFibonacci(fib_sequence,element)
    print ("The element is: " + str(req))