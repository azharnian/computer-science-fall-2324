# eliminated = []
# for i in range(N+1):
#     eliminated.append(False)

# eliminated = [ False for i in range(N + 1) ]
def sieve_eratosthenes(N):
    eliminated = [False] * (N + 1)
    prime_list = []
    for i in range(2, N+1):
        if not eliminated[i]:
            prime_list.append(i)
            j = i*i
            while j < N+1:
                eliminated[j] = True
                j += i
    return prime_list

if __name__ == "__main__":
    N = int(input())
    print(sieve_eratosthenes(N))