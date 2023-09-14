

with open("info.txt", "r") as file:
    data = file.readlines()

    # print(data)
    for name in data:
        print(name.strip())
