import sys
number = int(input("input your number : "))

if number > 0:
    print("Bilangan bulat positif")
elif number < 0:
    sys.exit("Bilangan bulat negatif")
else:
    print("Bilangan bulat nol.")

print("Terima kasih.")