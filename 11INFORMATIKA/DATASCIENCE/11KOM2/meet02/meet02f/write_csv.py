import csv

data = [
    {"Nama" : "Ron", "Usia" : 19},
    {"Nama" : "Harry", "Usia" : 18},
    {"Nama" : "Draco", "Usia" : 18}
]

fields = ["Nama", "Usia"]

with open("output.csv", "w", newline="") as file:
    to_csv = csv.DictWriter(file, fieldnames=fields)

    to_csv.writeheader()
    to_csv.writerows(data)