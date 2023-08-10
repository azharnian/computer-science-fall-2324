import re

email = input("input your email : ").strip()

# statement = "@" in email
# statement = re.search("@", email)
# statement = re.search(".@.", email)
# statement = re.search("..*@..*\.", email)
# statement = re.search(".+@.+\.com", email)
# statement = re.search("[a-zA-Z0-9_.]+@[a-zA-Z0-9_]+\.com", email)
# statement = re.search("[^@]+@[^@.]+\.com", email)
# statement = re.search("[^@]+@[^@.]+\.com$", email)
# statement = re.search("\w+@\w+\.com$", email)
# statement = re.search("\w+@[\w.]+\.com$", email)
# statement = re.search("^\w+@[\w.]+\.(com|id|net|org|edu)$", email)
# statement = re.search("^\w+@[^.][\w.]+\.(com|id|net|org|edu)$", email)
# statement = re.search("^\w+@[^.][\w.]+\.+[\w.]+$", email)
# statement = re.search("^[^.][\w.]+@[^.][\w.]+\.+[\w.]+$", email)
statement = re.search(r"^[^.][\w.]+@([^.][\w.])?\w+\.+[\w.]+$", email)

if statement:
    print("valid")
else:
    print("invalid")