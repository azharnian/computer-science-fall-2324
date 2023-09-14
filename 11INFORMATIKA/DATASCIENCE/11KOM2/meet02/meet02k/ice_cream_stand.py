from restaurant import Restaurant

class IceCreamStand(Restaurant):

    def __init__(self, *args, **kwargs):
        super().__init__(cuisine = "ice cream", *args, **kwargs)
        self.flavors = ["banana", "vanilla", "matcha"]
        
    def show_flavors(self):
        print("Available flavors : ", end=" ")
        for flavor in self.flavors:
            print(flavor, end=" ")
        print()

if __name__ == "__main__":  
    robins = IceCreamStand("baskin robins")
    robins.show_flavors()