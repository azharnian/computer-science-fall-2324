from sys import argv

if len(argv) > 1:
    # file = open("info.txt", "a")
    # file.write(f"{argv[1]}\n")
    # file.close()

    with open("info.txt", "a") as file:
        file.write(f"{argv[1]}\n")