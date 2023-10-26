from sieve import sieve_eratosthenes

def count_prime(N):
    return len(sieve_eratosthenes(N))

print(count_prime(100))