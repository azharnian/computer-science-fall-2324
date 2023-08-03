import re

email = input().strip()

# if re.search(".*@.*", email):
# if re.search(".+@.+", email):
# if re.search("..*@..*", email):
# if re.search(".+@.+.edu", email):
# if re.search(".+@.+\.edu", email):
# if re.search(r".+@.+\.edu", email):
# if re.search(r"^.+@.+\.edu$", email):
# [abcdefg] => a or b or c or d or ...
# [a-z] => a to z , [a-zA-Z0-9]
# if re.search(r"^[^@]+@[^@]+\.edu$", email):
# if re.search(r"^[a-zA-Z0-9_]+@[a-zA-Z0-9]+\.edu$", email):
# if re.search(r"^\w+@\w]+\.edu$", email):
if re.search(r"^\w+@\w]+\.(com|edu|gov|net|org)$", email):
    print("valid")
else:
    print("invalid")