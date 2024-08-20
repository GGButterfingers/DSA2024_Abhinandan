import random as rnd

def get_key_by_value(my_dict, target_value):
    for key, value in my_dict.items():
        if value == target_value:
            return key
    return None

def permute_by_Sorting(A):
    n = len(A)
    P = [0] * n  
    sort = {}
    
    for i in range(n):
        P[i] = rnd.randint(1, n**3)
        sort[A[i]] = P[i]  

    P.sort()

    for i in range(n):
        A[i] = get_key_by_value(sort, P[i]) 
    
    return A

if __name__ == "__main__":
    input_list = input("Enter numbers separated by spaces: ").strip().split()
    A = list(map(int, input_list))
    Permuted = permute_by_Sorting(A)
    print(Permuted)
