import csv

with open("data.csv", "r") as file:

    data_from_csv = csv.DictReader(file)

    for data in data_from_csv:
        print(data["Nama"], data["Kelas"], data["Nilai"])