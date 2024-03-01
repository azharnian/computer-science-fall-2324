
def gcf(a, b):
    if a < b:
        a, b = b, a
    r = a % b
    if r == 0:
        return b # base case
    return gcf(b, r)

A = int(input())
B = int(input())
print(gcf(A, B))