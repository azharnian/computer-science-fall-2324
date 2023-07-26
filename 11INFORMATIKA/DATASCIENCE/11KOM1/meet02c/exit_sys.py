import sys
number = int(input("input your number : "))

if number < 0:
    sys.exit("Your number is negative.")
elif number > 0:
    print("Your number is positive.")
elif number == 0:
    print("Your number is zero!")
print("Thank you!")
sys.exit(0)