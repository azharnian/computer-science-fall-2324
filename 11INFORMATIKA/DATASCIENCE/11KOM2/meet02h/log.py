
def log_function(func):

    def wrapper(*args, **kwargs):
        print(f"Calling Function {func.__name__}")
        res = func(*args, **kwargs)
        print(f"Function {func.__name__} Ended")
        return res

    return wrapper

def add(a, b):
    print("Calling Function Add")
    res = a + b
    print("Function Add Ended")
    return res

@log_function
def subtract(a, b):
    return abs(a - b)

print(add(10, 20))
print(subtract(10, 20))