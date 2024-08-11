def CountingSort(A):
    count = [0] * 10
    for num in A:
        if 0 <= num < 10:  
            count[num] += 1

    m = 0
    for j in range(len(count)):
        while count[j] > 0:
            A[m] = j
            count[j] -= 1
            m += 1

if __name__ == "__main__":
    input_list = input("Enter numbers separated by spaces: ").strip().split()
    A = list(map(int, input_list))
    CountingSort(A)
    print(A)