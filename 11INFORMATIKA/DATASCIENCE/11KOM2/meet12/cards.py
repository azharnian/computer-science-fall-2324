from gcf import find_gcf

N = int(input())
res = []
while N > 0:
    a, b = map(int, input().split())
    res.append(find_gcf(a, b))
    N -= 1

for item in res:
    print(item)