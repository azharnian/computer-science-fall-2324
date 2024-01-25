
class Employee():

    employee_count = 0

    def __init__(self, name=None):
        Employee.employee_count += 1
        self.name = name

    def get_name(self):
        return self.name
    
    def set_name(self, name):
        self.name = name

    @staticmethod
    def get_employee_count():
        return Employee.employee_count
    

