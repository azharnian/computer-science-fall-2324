from restaurant import Restaurant


class IceCreamStand(Restaurant):

    def __init__(self, nama, tipe="Ice Cream"):
        super().__init__(nama, tipe)
        self.flavors = ["vanila", "matcha"]

    def show_flavors(self):
        print("This Ice Cream Stand provides you some flavors, such as", end=" ")
        for flavor in self.flavors:
            print(flavor, end=" ")

baskin = IceCreamStand("Baskin")
baskin.show_flavors()