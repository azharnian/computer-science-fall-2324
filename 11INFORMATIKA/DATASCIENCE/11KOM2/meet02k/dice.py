from random import randint

class Die:

    def __init__(self, sides=6):
        self.sides = sides

    def roll_die(self):
        print(randint(1, self.sides), end=" ")

dice6 = Die()
for i in range(10):
    dice6.roll_die()
print()

dice10 = Die(10)
for i in range(10):
    dice10.roll_die()
print()

dice20 = Die(20)
for i in range(10):
    dice20.roll_die()
print()