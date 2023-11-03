def merge_sort(arr):
    if len(arr) <= 1:
        return arr
 
    middle = len(arr) // 2
    left_half = arr[:middle]
    right_half = arr[middle:]

    left_half = merge_sort(left_half)
    right_half = merge_sort(right_half)

    return merge(left_half, right_half)

def merge(left, right):
    result = []
    left_index, right_index = 0, 0
    counter = 0
    while left_index < len(left) and right_index < len(right):
        print(counter)
        if left[left_index] < right[right_index]:
            result.append(left[left_index])
            left_index += 1
        else:
            result.append(right[right_index])
            right_index += 1
        print(result)
        counter += 1
    print('res', result)
    result.extend(left[left_index:])
    print('res ext. left', result, left, left[left_index:])
    result.extend(right[right_index:])
    print('res ext. right', result, right, right[right_index:])
    return result

arr = [38, 27, 43, 3, 9, 82, 10]
sorted_arr = merge_sort(arr)
print(sorted_arr)