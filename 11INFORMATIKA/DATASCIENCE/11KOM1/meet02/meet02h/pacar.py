

class Pacar:

    def __init__(self, nama, kelamin = "wanita", umur = 16):

        self.nama = nama
        self.kelamin = kelamin
        self.umur = umur

    def menyapa(self):
        print(f"Hai, nama saya {self.nama}")

    def bernyanyi(self, title="My heart will go on"):
        print(f"saya akan bernyanyi bersama kamu, lagunya {title}")

pacar_pertama_oscar = Pacar("cindi", "wanita", 15)
pacar_kedua_oscar = Pacar("stela", "wanita", 18)
pacar_ketiga_oscar = Pacar("aisyah") 

pacar_pertama_oscar.menyapa()
pacar_pertama_oscar.bernyanyi()
pacar_kedua_oscar.menyapa()
pacar_ketiga_oscar.menyapa()