def ThreeWayPartition(A, left, right):
    x = A[left]
    i,j,k = left+1, right, left
    while(i<=j):
        if A[i] < x:
            A[i], A[k] = A[k], A[i]
            i += 1
        elif A[i] > x:
            A[i], A[j] = A[j], A[i]
            j -= 1
        else:
            i += 1
    A[i-1], A[left] = A[left], A[i-1]
    return i-1


if __name__ == "__main__":
    input_list = input("Enter numbers separated by spaces: ").strip().split()
    A = list(map(int, input_list))

    print(f"Index of first element after doing 3-way partition: {ThreeWayPartition(A,0, len(A))}")