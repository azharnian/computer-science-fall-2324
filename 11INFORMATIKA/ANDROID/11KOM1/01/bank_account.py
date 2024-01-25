from random import randint

class BankAccount():

    OVERDRAWN_PENALTY = 20.00

    def __init__(self, pin_security=None):
        self.acc_number = "AC"+str(randint(100, 1000))
        self.pin_security = str(pin_security)
        self.balance = 0

    def get_balance(self):
        return self.balance
    
    def deposit(self, pin, amount):
        if pin == self.pin_security:
            self.balance += amount
        
    def withdraw(self, pin, amount):
        if pin == self.pin_security:
            if self.balance >= amount:
                self.balance -= amount
            else:
                self.balance -= BankAccount.OVERDRAWN_PENALTY

    @staticmethod
    def change_overdrawn_penalty(new_penalty):
        BankAccount.OVERDRAWN_PENALTY = new_penalty
