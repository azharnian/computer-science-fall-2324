def print_number(n):
    print(n, end = " ")
    if n < 9:
        return print_number(n+1) # recursive case
    return # base case


for number in range(10):
    print(number, end=" ")
print()


number = 0
while number < 10:
    print(number, end=" ")
    number += 1
print()

print_number(0)
print()