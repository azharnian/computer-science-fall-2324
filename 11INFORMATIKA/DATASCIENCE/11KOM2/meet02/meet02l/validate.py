import re

email = input("Enter your email : ")
pattern = "^[^\.][\w\.]+@\w+\.(com|org|id|net|edu)$"
# pattern = "..*@..*\.(com|org|id|net|edu)"
statement = re.search(pattern, email)

if statement:
    print("valid")
else:
    print("invalid")