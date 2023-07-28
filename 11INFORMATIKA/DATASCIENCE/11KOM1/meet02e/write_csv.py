import csv

data = [
    {"Name" : "Ron", "Phone" : "0813"},
    {"Name" : "Harry", "Phone" : "0812"},
    {"Name" : "Draco", "Phone" : "0811"}
]

fields = ["Name", "Phone"]

with open("output.csv", "w", newline="") as file:

    writer = csv.DictWriter(file, fieldnames=fields)

    writer.writeheader()
    writer.writerows(data)
