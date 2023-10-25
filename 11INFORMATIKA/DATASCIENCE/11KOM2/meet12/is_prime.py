
def is_prime_naive(N):
    if N <= 1:
        return False
    for i in range(2, N-1): # int i = 2; i < (N-1); i++
        if N % i == 0:
            return False
    return True

from math import sqrt
def is_prime_sqrt(N):
    if N <= 1:
        return False
    i = 2
    while i <= sqrt(N): # i*i <= N
        if N % i == 0:
            return False
        i += 1
    return True

assert is_prime_sqrt(11) == True
assert is_prime_sqrt(25) == False

# print(is_prime_naive(10)) #False
# print(is_prime_naive(17)) #True
# assert is_prime_naive(20) == False
# assert is_prime_naive(23) == True
