
def find_total(arr):
    if len(arr) == 1:
        return arr[0]

    middle = len(arr) // 2
    left_half = arr[:middle]
    right_half = arr[middle:]

    left_half = find_total(left_half)
    right_half = find_total(right_half)

    total = left_half + right_half
    return total

numbers = [7, 2, 5, 4, 1, 6, 0, 3]
print(find_total(numbers))