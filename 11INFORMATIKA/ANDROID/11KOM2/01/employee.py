
class Employee():

    number_of_emp = 0

    # CONSTRUCTOR
    def __init__(self, name=""):
        self.name = name
        Employee.number_of_emp += 1 # static attr

    # GETTER / ACCESSOR
    def get_name(self):
        return self.name
    
    # SETTER / MUTATOR
    def set_name(self, new_name):
        self.name = new_name

    @staticmethod
    def get_number_of_emp():
        return Employee.number_of_emp
    
if __name__ == "__main__":

    emp_1 = Employee()
    emp_2 = Employee("Jane")

    print(Employee.get_number_of_emp())

    emp_1.set_name("John")
    print(emp_1.get_name())
    
