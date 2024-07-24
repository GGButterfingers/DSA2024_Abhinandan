def Fibonacci(limit):

    if limit <= 0:
        print("Invalid limit")
        return []
    elif limit == 1:
        return [1]
    elif limit == 2:
        return [1, 1]
    
    else:
        fib_sequence = [1, 1]
        i,T1,T2 = 2,1,1          #i - No. of fibonacci nos printed till now, T1 - (i-1)th Fibonacci number
                                 #T2 - (i-2)nd Fibonacci number, fib - i-th Fibonacci number
        while (i != limit):
            fib = T1 + T2
            T2 = T1
            T1 = fib
            fib_sequence.append(fib)
            i += 1

        return fib_sequence

if __name__ == "__main__":

    limit = int(input("Enter the limit till where you want to generate the Fibonacci sequence: "))
    fib_sequence = Fibonacci(limit)
    print(fib_sequence)