
class Employee:

    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay

    @property
    def fullname(self):
        return f'{self.first} {self.last}'
    
    @property
    def email(self):
        return f'{self.last}@mail.com'
    
# emp = Employee("John", "Doe", "3000")