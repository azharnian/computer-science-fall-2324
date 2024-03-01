print("TIKET BUS")
print(("-")*15)
print("Kode Kota:")
print("1.Prabumulih")
print("2.Muara Enim")
print("3.Lubuklinggau")

Kota = int (input("Which City Would you like to go to?(1/2/3): "))

print("Kode Kelas:")
print("1.Ekonomi")
print("2.Bisnis")
print("3.Eksekutif")

Kelas = int (input("What class are you going to go with?(1/2/3): "))
Ticket = int (input("How many tickets are you going to buy?: "))
Code = input("Just askin, whats the code?: ")

Harga = 0
if Kota == 1:
    if Kelas == 1 :
        # Prabumulih Ekonomi
        Harga = 100_000
    elif Kelas == 2:
        # Prabumulih Binis
        Harga = 400_000
    elif Kelas == 3:
        pass
elif Kota == 2:
    if Kelas == 1 :
        pass
    elif Kelas == 2:
        pass
    elif Kelas == 3:
        pass
elif Kota == 3:
    if Kelas == 1 :
        pass
    elif Kelas == 2:
        pass
    elif Kelas == 3:
        pass