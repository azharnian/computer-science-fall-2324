from sys import argv
import cowsay

args = argv
if len(args) > 1:
    message = args[1]
    cowsay.cow(message)