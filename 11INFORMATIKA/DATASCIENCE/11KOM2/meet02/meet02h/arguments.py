

def sum_numbers(a, b, *args):
    if args:
        return a + b + sum(args )
    return a + b

print(sum_numbers(10,20))
print(sum_numbers(10, 20, 30, 40))