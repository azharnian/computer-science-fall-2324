


def find_gcf(a, b):
    if a < b:
        a, b = b, a
    r = a % b
    if r == 0:
        return b
    return find_gcf(b, r)

def find_lcm(a, b):
    return (a * b) / find_gcf(a, b)

if __name__ == "__main__":
    print(find_gcf(20, 100))
    print(find_lcm(20, 100))