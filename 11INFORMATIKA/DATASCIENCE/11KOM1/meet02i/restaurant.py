class Restaurant:

    def __init__(self, nama, tipe):
        self.nama_restoran = nama
        self.tipe_masakan = tipe
        self.orderan = 0

    def describe_restaurant(self):
        pass

    def open_restaurant(self):
        pass

    def set_number_served(self, n):
        self.orderan = n

    def increment_number_served(self, n = 1):
        self.orderan += n

resto_padang = Restaurant("Pagi Sore", "Masakan Padang")
print(resto_padang.orderan)
# resto_padang.orderan = 10
resto_padang.set_number_served(10)
print(resto_padang.orderan)
resto_padang.increment_number_served()
resto_padang.increment_number_served(10)
print(resto_padang.orderan)