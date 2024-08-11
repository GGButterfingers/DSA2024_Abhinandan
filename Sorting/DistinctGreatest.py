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

def Top3(A):
    heap_size = build_max_heap(A)
    top3 = set()
    while len(top3) < 3 and heap_size > 0:
        top3.add(A[0])
        heap_size -= 1
        A[0], A[heap_size] = A[heap_size], A[0]
        max_heapify(A, 0, heap_size)
    return list(top3)

if __name__ == "__main__":
    input_list = input("Enter numbers separated by spaces: ").strip().split()
    A = list(map(int, input_list))
    final = Top3(A)
    print("We get:", final)
