Barang =  input( "Masukkan barang yang kamu mau beli: ")
Harga = int ( input( "Masukkan juga harga barang tersebut: "))
Jumlah = int ( input( "Berapa banyak barang tersebut kamu mau beli?: "))
Bayar = int ( input( "Berapa kamu akan bayar untuk barang tersebut?: "))

subTotal = Harga * Jumlah
Diskon = subTotal * 0.2 # 20% sales
Total = subTotal - Diskon
Kembalian = Bayar - Total
Uang_50000 = Kembalian // 50000
Kembalian = Kembalian - (50000 * Uang_50000)

Uang_20000 = Kembalian // 20000
Kembalian = Kembalian - (20000 * Uang_20000)

Uang_10000 = Kembalian // 10000
Kembalian = Kembalian - (10000 * Uang_10000)

Uang_5000 = Kembalian // 5000
Kembalian = Kembalian - (5000 * Uang_5000)

Uang_2000 = Kembalian // 2000
Kembalian = Kembalian - (2000 * Uang_2000)

Uang_1000 = Kembalian // 1000

print( f"SubTotal : {subTotal}")
print( f"Diskon : {Diskon}")
print( f"Total : {Total}")
print( f"Kembalian : {Kembalian}")
print( f"Uang_50000 : {Uang_50000} lembar")
print( f"Uang_20000 : {Uang_20000} lembar")
print( f"Uang_10000 : {Uang_10000} lembar")
print( f"Uang_5000 : {Uang_5000} lembar")
print( f"Uang_2000 : {Uang_2000} lembar")
print( f"Uang_1000 : {Uang_1000} lembar")
