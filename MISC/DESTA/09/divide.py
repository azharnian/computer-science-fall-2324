
def divide(x, y):
    try:
        res = int(x)/int(y)
    except ValueError:
        print("Wrong inputs...")
    except ZeroDivisionError:
        print("Can't divided by zero...")
    else:
        return res
    return "loop"

# 0 == False == "" == [] == {}

while True:
    a = input("a : ")
    b = input("b : ")
    ans = divide(a, b)
    if ans != "loop":
        print(ans)
        break
    