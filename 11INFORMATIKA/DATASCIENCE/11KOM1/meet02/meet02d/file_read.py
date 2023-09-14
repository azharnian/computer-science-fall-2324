
with open("info.txt", "r") as file:
    names = file.readlines()

data = []
for name in names:
    data.append(name.strip())

for item in data:
    print(item)