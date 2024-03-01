import json

def load_number():
    try:
        with open("fav_number.json", "r") as f:
            fav_number = json.load(f)
    except:
        return False
    else:
        return fav_number

def save_number(n):
    with open("fav_number.json", "w") as f:
        json.dump(n, f)
    print("I'll remember it!")
    return True

fav_number = load_number()

if not fav_number:
    user_input = input("What's your favorite number? ")
    save_number(user_input)
else:
    print(f"I already know your favorite number.\nYour number is {fav_number}")
    
