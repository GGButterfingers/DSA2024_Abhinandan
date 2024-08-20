import random as rnd

def randomize_in_place(A):
    n = len(A)
    for i in range(n):
        j = rnd.randint(i, n - 1)
        A[i], A[j] = A[j], A[i]

if __name__ == "__main__":
    input_list = input("Enter numbers separated by spaces: ").strip().split()
    A = list(map(int, input_list))
    randomize_in_place(A)
    print(A)
