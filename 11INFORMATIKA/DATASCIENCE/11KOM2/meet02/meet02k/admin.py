from user import User

class Privilages:

    def __init__(self, *args):
        self.privileges = args

    def show(self):
        print("Admin privileges : ")
        for privilege in self.privileges:
            print(f"- {privilege}")

class Admin(User):

    def __init__(self, role = "admin", *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.privileges = Privilages("can edit post", "can modify system", "can ban user")

if __name__ == "__main__":
    jono = Admin("jono", "subianto")
    jono.privileges.show()