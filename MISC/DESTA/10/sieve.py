from math import log

def sieve(N):
    eleminated = [ False for item in range(N+1) ]
    prime_list = []
    for i in range(2, N+1):
        if not eleminated[i]:
            prime_list.append(i)
            j = i*i
            # while j <= N+1:
            #     eleminated[j] = True
            #     j += i
            for number in range(j, N+1, i):
                eleminated[number] = True
    return prime_list

print(len(sieve(1000)))

# euler prime
print(int(1000/log(1000)))