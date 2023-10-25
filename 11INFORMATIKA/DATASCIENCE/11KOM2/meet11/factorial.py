

def factorial(n):
    result = 1
    for number in range(n, 1, -1):
        result *= number

    return result

def permutation(n, r):
    return factorial(n)/ factorial(n-r)

user_input = int(input())
print(factorial(user_input))