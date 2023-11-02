
def selection_sort(h):
    N = len(h)
    for i in range(N):
        min_index = i
        for j in range(i+1, N):
            if h[j] < h[min_index]:
                min_index = j
        h[i], h[min_index] = h[min_index], h[i]

    return h

arr = [7, 2, 5, 1, 6, 0, 3]
print(selection_sort(arr))