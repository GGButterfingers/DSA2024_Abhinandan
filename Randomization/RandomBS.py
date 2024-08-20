import random as rnd
import time

def binary_search(arr, target):
    low, high = 0, len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] < target:
            low = mid + 1
        else:
            high = mid
    if arr[low] == target:
        return high
    return -1

def random_binary_search(arr, target):
    low, high = 0, len(arr) - 1
    while low <= high:
        mid = rnd.randint(low, high)
        if arr[mid] < target:
            low = mid + 1
        else:
            high = mid
    if arr[low] == target:
        return high
    return -1


def compare_searches(arr, target, n = 100):
    binary_search_times = []
    random_binary_search_times = []

    for i in range(n):

        start = time.time()
        binary_search(arr, target)
        end = time.time()
        binary_search_times.append(end - start)

        start = time.time()
        random_binary_search(arr, target)
        end = time.time()
        random_binary_search_times.append(end - start)

    avg_binary_search_time = sum(binary_search_times) / n
    avg_random_binary_search_time = sum(random_binary_search_times) / n

    return avg_binary_search_time, avg_random_binary_search_time

arr = list(range(1, 100)) 
target = rnd.choice(arr)  

binary_search_time, random_binary_search_time = compare_searches(arr, target)

print(f"Average Time for Standard Binary Search: {binary_search_time:.10f} seconds")
print(f"Average Time for Random Binary Search: {random_binary_search_time:.10f} seconds")
