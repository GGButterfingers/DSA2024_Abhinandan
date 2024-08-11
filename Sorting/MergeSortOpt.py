
def merge(A, left, middle, right, temp):
    i, j, k = left, middle + 1, left

    while i <= middle and j <= right:
        if A[i] <= A[j]:
            temp[k] = A[i]
            i += 1
        else:
            temp[k] = A[j]
            j += 1
        k += 1

    while i <= middle:
        temp[k] = A[i]  
        i += 1
        k += 1

    while j <= right:
        temp[k] = A[j]
        j += 1
        k += 1

    for i in range(left, right + 1):
        A[i] = temp[i]

def MergeSortOpt(A, left, right, temp):
    if left < right:
        middle = (left + right) // 2
        MergeSortOpt(A, left, middle, temp)
        MergeSortOpt(A, middle + 1, right, temp)
        merge(A, left, middle, right, temp)

if __name__ == "__main__":
    input_list = input("Enter numbers separated by spaces: ").strip().split()
    A = list(map(int, input_list))
    Sorted = MergeSortOpt(A)
    print(Sorted)


	   