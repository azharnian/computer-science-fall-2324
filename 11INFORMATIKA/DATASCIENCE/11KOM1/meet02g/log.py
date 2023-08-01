

def report_activity(func):

    def wrapper(*args, **kwargs):
        
        print(f"Calling function {func.__name__}")
        result = func(*args, **kwargs)
        print(f"Function {func.__name__} finished")
        return result

    return wrapper

@report_activity
def print_msg(msg):
    print(msg)

@report_activity
def add(a, b, c):
    return a + b + c

@report_activity
def subtract(a, b):
    return abs(a - b)

@report_activity
def buy_popmie():
    # print("I'm buying popmie right now!")
    return "Pop Mie"

@report_activity
def buy_anything(item = "Mie Sedap", **kwargs):
    print(f"I'm buying {item}")
    if kwargs:
        for key, value in kwargs.items():
            print(f"\t {value}")
    kwargs["item"] = item
    return kwargs

print(add(3, 7, 10))
# print(subtract(3, 7))
# print_msg("Hello, world!")
# print(buy_popmie())
# print(buy_anything(item = "Indomie Goreng", item2 = "Indomie Kari"))