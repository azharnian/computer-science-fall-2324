from sys import argv

if len(argv) > 1:
    # if argv[1] == "-rf":
    #     print("Hapus folder!")
    # else:
    #     print("Hapus file")

    for name in argv[1:]:
        print(name)
