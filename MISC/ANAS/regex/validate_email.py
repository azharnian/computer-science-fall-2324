import re

email = input().strip()

# if re.search("@", email):
# if re.search(".@", email):
# if re.search(".@.", email):
# if re.search(".*@.*", email):
# if re.search("..*@..*", email):
# if re.search(".+@.+", email):
# if re.search(".+@.+com", email):
# if re.search(".+@.+\.com", email):
# if re.search(r".+@.+\.com", email):
# if re.search(r"^.+@.+\.com$", email):
# if re.search(r"^[^@]+@[^@]+\.com$", email):
# if re.search(r"^[a-zA-Z0-9_.]+@[a-zA-Z0-9_.]+\.com$", email):
# if re.search(r"^\w+@\w+\.com$", email):
# if re.search(r"^[\w.]+@[\w.]+\.com$", email):
# if re.search(r"^[\w.]+@[\w.]+\.(com|id|net|org)$", email):
# if re.search(r"^[\w.]+@[\w.]+\.[\w.]+$", email):
if re.search(r"^[\w.]+@[\w.]+\.[\w.]+$", email, re.IGNORECASE):
    print("valid")
else:
    print("invalid")