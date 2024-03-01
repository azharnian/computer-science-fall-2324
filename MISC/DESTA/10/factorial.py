"""
faktorial
n! = n x (n-1) x (n-2) x ... x 1

contoh:
4! = 4 x 3 x 2 x 1

"""
def factorial(n):
    res = 1
    for i in range(n,1,-1):
        res *= i
    return res

def fact(n):
    if n <= 0:
        return 1
    if n == 1:
        return 1 # base case
    return n * fact(n-1) # recursive case

"""
fact(4) = 4 x fact(3)
4! = 4 x 3!

        = 4 x 3 x fact(2)
        = 4 x 3 x 2 x fact(1)
        = 4 x 3 x 2 x 1
        = 24
        STACKING RECURSIVE
"""

# 4 x 3 x 2 x 1
print(factorial(4))
print(factorial(5))
print(factorial(1000))

print("*"*10)

print(fact(4))
print(fact(5))
print(fact(1000))