from handphone import Handphone as HP
from face_id import FaceId

class Smartphone(HP):
	
	def __init__(self, model, year):
		super().__init__(model, year, merk="Samsung")
		self.network = "5G"
		self.face_id = FaceId()
	
	# override
	def ringing(self):
		print("Woof woof")

my_nokia = HP("ASHA", "NOKIA", 2015)
my_smartphone = Smartphone("S24", 2024)
my_nokia.ringing()
my_smartphone.ringing()
print(my_smartphone.face_id.face_image)

print(my_smartphone.model)