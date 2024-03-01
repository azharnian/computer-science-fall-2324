import json

data = None

with open("data.json", "r") as file:
    data = json.load(file)

print(data)