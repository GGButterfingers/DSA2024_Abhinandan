def find_leftmost_occurrence(A, ele):
    n = len(A)
    left = 0
    right = n - 1
    
    while left != right:
        mid = (left + right) // 2  
        if A[mid] >= ele:
            right = mid
        elif A[mid] < ele:
            left = mid + 1
   
    if A[right] == ele:
        print("Element found at index " + str(right) + " in the sorted list")
    else:
        print("Element not found!!")


input_list = input("Enter numbers separated by spaces: ").strip().split()
A = list(map(int, input_list))
ele = int(input("Enter the element to find: "))
A.sort()
print(A)

find_leftmost_occurrence(A, ele)
