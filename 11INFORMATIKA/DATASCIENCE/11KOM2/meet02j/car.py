
class Car:

    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.odometer = 0

    def describe(self):
        print(f"This car made by {self.make} model : {self.model}  release in {self.year}")

class Battery:

    def __init__(self):
        self.make = "ABC Company"
        self.capacity = 100_000

    def check_capacity(self):
        print(f"Capacity : {self.capacity} kWh")


class ElectricCar(Car):

    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.battery = Battery()


my_toyota = Car("Toyota", "Agya", 2023)
my_toyota.describe() 

my_hyundai = ElectricCar("Hyundai", "KonaEv", 2020)
my_hyundai.describe()
my_hyundai.battery.check_capacity()

    