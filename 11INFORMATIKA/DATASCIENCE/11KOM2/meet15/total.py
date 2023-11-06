
def sum(arr):
    if len(arr) == 1:
        return arr[0]
    
    mid = len(arr) // 2
    left = arr[:mid]
    right = arr[mid:]

    return sum(left) + sum(right)

numbers = [7, 2, 5, 4, 1, 6, 0, 3]
print(sum(numbers))