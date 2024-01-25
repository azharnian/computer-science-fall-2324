
class Employee():

    numberEmployee = 0

    # CONSTRUCTOR
    def __init__(self, name):
        self.name = name
        Employee.numberEmployee += 1

    # GETTER / ACCESSOR
    def get_name(self):
        return self.name
    
    #SETTER / MUTATOR
    def set_name(self, new_name):
        self.name = new_name

    @staticmethod
    def get_number_emp():
        return Employee.numberEmployee
    
emp1 = Employee("John")
emp2 = Employee("Jane")
print(Employee.numberEmployee)

print(emp1.get_name())
emp2.set_name("Angel")
print(emp2.get_name())
print(Employee.get_number_emp())
