def MergeSort(A):
    if len(A) <= 1:
        return A

    left = 0
    right = len(A)
    mid = (left + right) // 2

    LL = A[left:mid]
    RL = A[mid:right]

    LL = MergeSort(LL)
    RL = MergeSort(RL)

    i, j = 0, 0
    merged = []

    while i < len(LL) and j < len(RL):
        if LL[i] <= RL[j]:
            merged.append(LL[i])
            i += 1
        else:
            merged.append(RL[j])
            j += 1

    while i < len(LL):
        merged.append(LL[i])
        i += 1

    while j < len(RL):
        merged.append(RL[j])
        j += 1

    return merged

if __name__ == "__main__":
    input_list = input("Enter numbers separated by spaces: ").strip().split()
    A = list(map(int, input_list))
    Sorted = MergeSort(A)
    print(Sorted)
