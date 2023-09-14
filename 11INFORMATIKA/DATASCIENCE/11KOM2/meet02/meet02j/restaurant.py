
class Restaurant:

    def __init__(self, name, cuisine):
        self.name = name
        self.cuisine = cuisine
        self.number_served = 0

    def describe(self):
        print(f"Ini restoran {self.name} menjual masakan {self.cuisine}")

    def open(self):
        print(f"Restoran {self.name} sudah dibuka")

    def set_number_served(self, n):
        self.number_served = n

    def increment_number_served(self, n = 1):
        self.number_served += n

restaurant = Restaurant("Pagi Sore", "Padang")
print(restaurant.number_served)
restaurant.number_served = 10
print(restaurant.number_served)

restaurant.set_number_served(20)
print(restaurant.number_served)

restaurant.increment_number_served(5)
print(restaurant.number_served)