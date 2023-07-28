import csv

with open("data.csv", 'r') as file:

    reader = csv.DictReader(file)

    for row in reader:
        name = row["name"]
        age = row["age"]

        print(f"Name : {name}, age : {age}")