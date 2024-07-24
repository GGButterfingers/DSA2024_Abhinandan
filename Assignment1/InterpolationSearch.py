def interpolation_search(arr, x):
    low = 0
    high = len(arr) - 1

    while low <= high and x >= arr[low] and x <= arr[high]:
        if low == high:
            if arr[low] == x:
                return low
            return -1

        pos = low + int((((high - low) * (x - arr[low]) / (arr[high] - arr[low]))))

        if arr[pos] == x:
            return pos
        if arr[pos] < x:
            low = pos + 1
        else:
            high = pos - 1

    return -1

def generate_linear_data(n, slope, intercept):
    return [slope * i + intercept for i in range(n)]

if __name__ == "__main__":
    n = 1000  

    
    slope = float(input("Enter the slope: "))
    intercept = float(input("Enter the intercept: "))

    
    data = generate_linear_data(n, slope, intercept)
    print(data)

   
    target = int(input("Enter the target value to search for: "))
    index = interpolation_search(data, target)

    if index != -1:
        print(f"Element {target} found at index {index}")
    else:
        print(f"Element {target} not found in the array")
