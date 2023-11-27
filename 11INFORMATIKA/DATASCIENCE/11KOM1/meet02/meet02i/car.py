class Vehicle:

    def __init__(self, type):
        self.type = type
    
    def move(self):
        print(f"The {self.type} is moving ...")

class Boat(Vehicle):

    def __init__(self):
        super().__init__(type = "Boat")

    def move(self):
        print(f"The {self.type} is sailing ...")

class Car():

    def __init__(self, make, model, year):
        # super().__init__(type = "Car")
        self.make = make
        self.model = model
        self.year = year
        self.odometer = 0
    
    def increment_odometer(self, n=1):
        self.odometer += n

class Battery:

    def __init__(self, capacity = 10000):
        self.capacity = capacity

    def charge_battery(self, n = 10):
        self.capacity += n

class ElectricCar(Car):

    def __init__(self, make, model, year):
        super().__init__(make, model, year)
        self.battery = Battery(capacity = 10_000_000_000)

hondaEv = ElectricCar("Honda", "x", 2023)
hondaEv.increment_odometer(10)
print(hondaEv.odometer)
hondaEv.battery.charge_battery(1000)
print(hondaEv.battery.capacity)

hondaEv.move()