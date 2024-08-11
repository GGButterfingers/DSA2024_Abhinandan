def Heapify(A,index):
    parent = (index - 1)//2
    while A[index] > A[parent] and index > 0:
        A[index],A[parent] = A[parent],A[index]
        index = parent
        parent = (index - 1)//2

def Insert(A,value):
    A.append(value)
    Heapify(A,len(A) - 1)