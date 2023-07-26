
"""
file = open("info.txt", "a")
file.write("Harry Potter\n")
file.close()
"""

with open("info.txt", "a") as file:
    file.write("Draco Malfoy\n")