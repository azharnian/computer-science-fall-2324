try:
    user_input = int(input("Input your number : "))
except ValueError:
    print("Wrong Input! Not an integer!")
else:
    print(f"Your number is {user_input}")
finally:
    print("Thankyou..")