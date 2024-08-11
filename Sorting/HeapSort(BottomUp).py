def max_heapify(A, i, heap_size):
    l = 2 * i + 1  
    r = 2 * i + 2  
    largest = i

    if l < heap_size and A[l] > A[largest]:
        largest = l

    if r < heap_size and A[r] > A[largest]:
        largest = r

    if largest != i:
        A[i], A[largest] = A[largest], A[i]
        max_heapify(A, largest, heap_size)

def build_max_heap(A):
    heap_size = len(A)
    for i in range(heap_size // 2 - 1, -1, -1):
        max_heapify(A, i, heap_size)
    return heap_size

def heap_sort(A):
    heap_size = build_max_heap(A)
    for i in range(len(A) - 1, 0, -1):
        A[0], A[i] = A[i], A[0]
        heap_size -= 1
        max_heapify(A, 0, heap_size)

if __name__ == "__main__":
    input_list = input("Enter numbers separated by spaces: ").strip().split()
    A = list(map(int, input_list))
    heap_sort(A)
    print("Sorted array:", A)
