class Handphone():
 
	# CONSTRUCTOR
	def __init__(self,  model, year, merk):
		self.merk = merk # attribute (var in class)
		self.model = model
		self.year = year
 
	def ringing(self): # method (func in class)
		print("Kring... kring...")