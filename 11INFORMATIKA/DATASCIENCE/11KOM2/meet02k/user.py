
class User:

    def __init__(self, first, last, role = "student"):

        self.first = first
        self.last = last
        self.role = role
        self.login_attempts = 0

    def describe(self):
        pass

    def greet(self):
        pass

    def increment_login_attempts(self):
        self.login_attempts += 1

    def reset_login_attempts(self):
        self.login_attempts = 0

if __name__ == "__main__":
    anas = User("anas", "azhar")
    anas.increment_login_attempts()
    anas.increment_login_attempts()
    anas.increment_login_attempts()
    print(anas.login_attempts)
    anas.reset_login_attempts()
    print(anas.login_attempts)