

def sum_numbers(a, b, *args):
    if len(args) > 1:
        return a + b + sum(args)
    return a + b

print(sum_numbers(3, 4, 5, 6))
print(sum_numbers(10, 20))