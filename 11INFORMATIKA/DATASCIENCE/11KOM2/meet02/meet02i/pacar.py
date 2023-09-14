
class Pacar:

    def __init__(self, name, age, sex = "Female"):

        self.name = name
        self.sex = sex
        self.age = age

    def say_hi(self):
        print(f"Hi, saya {self.name}")

    def nongkrong(self):
        print("Ayo ...")


pacar_satu = Pacar("Tania", 15, "Female")
pacar_satu.say_hi()
pacar_satu.nongkrong()

pacar_dua = Pacar("Sylvi", 18)
pacar_dua.say_hi()