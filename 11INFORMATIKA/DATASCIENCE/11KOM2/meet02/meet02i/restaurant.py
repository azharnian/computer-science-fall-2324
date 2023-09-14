
class Restaurant:

    def __init__(self, name, cuisine):
        self.name = name
        self.cuisine = cuisine

    def describe(self):
        print(f"Ini restoran {self.name} menjual masakan {self.cuisine}")

    def open(self):
        print(f"Restoran {self.name} sudah dibuka")

resto_1 = Restaurant("Pagi Sore", "Padang")
print(resto_1.name)
print(resto_1.cuisine)
resto_1.describe()
resto_1.open()

resto_2 = Restaurant("McD", "Cepat Saji")
resto_2.describe()

resto_3 = Restaurant("Mie Gacoan", "Pedas")
resto_3.describe()

resto_4 = Restaurant("Warung Kito", "Lokal")
resto_4.describe()
