def SelectionSort(A):
    i = 0
    while i != len(A)-1:
        min = A[i]
        j = i + 1
        while (j != n):
            if (A[j] < min):
                min = A[j]
                pos = j
            j += 1
        A[i],A[pos] = A[pos],A[i]
        i += 1

    return A
        