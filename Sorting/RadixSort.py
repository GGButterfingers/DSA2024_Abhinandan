def to_digits(num):
    return len(str(num))

def get_digit(num, digit_place, base=10):
        return (num // (base ** digit_place)) % base

def RadixSort(A, base=10):
    if not A:
        return A

    max_num = max(A)
    max_digits = to_digits(max_num)
    
    for digit_place in range(max_digits):
        buckets = [[] for _ in range(base)]
        
        for num in A:
            digit = get_digit(num, digit_place, base)
            buckets[digit].append(num)
        
        A = [num for bucket in buckets for num in bucket]
    
    return A

if __name__ == "__main__":
    input_list = input("Enter numbers separated by spaces: ").strip().split()
    A = list(map(int, input_list))
    Sorted = RadixSort(A)
    print(Sorted)
