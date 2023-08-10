from user import User

class Privileges:

    def __init__(self, *args):
        self.privileges = args

    def show_privileges(self):
        print("Privileges :")
        for item in self.privileges:
            print(f"-\t{item}")

class Admin(User):

    def __init__(self, *args, **kwargs):
        super().__init__(age=0, *args, **kwargs)
        self.privileges = Privileges("can delete post",
                                     "can ban user")  

budi = Admin("budi", "santoso")
# budi.show_privileges()
budi.privileges.show_privileges()

