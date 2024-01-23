def add_number(a=1, b=1):
	result = a + b
	return result

def say_hello(pet, owner = "djony"):
	print(f"This {pet} is belong to {owner}")

num = add_number(10, 20)
print(num)

say_hello(pet = "molly",owner = "anas")
say_hello(pet = "woof woof")

print(add_number())