def partition(A, beg, end):
    pivot = A[beg]
    i = beg + 1
    j = end - 1

    while i <= j:
        if A[i] <= pivot:
            i += 1
        elif A[j] > pivot:
            j -= 1
        if i <= j:
            A[i], A[j] = A[j], A[i]
    
    A[beg], A[j] = A[j], A[beg]
    return j

def QuickSort(A, beg, end):
    if beg < end:
        pos = partition(A, beg, end)
        QuickSort(A, beg, pos)
        QuickSort(A, pos + 1, end)

if __name__ == "__main__":
    input_list = input("Enter numbers separated by spaces: ").strip().split()
    A = list(map(int, input_list))
    QuickSort(A, 0, len(A))
    print(A)
