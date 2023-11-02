
def binary_search(h, X):
    hasil = 0
    kiri = 0
    kanan = len(h)-1

    while kiri <= kanan and hasil == 0:
        tengah = (kiri + kanan) // 2
        if (X < h[tengah]):
            kanan = tengah - 1
        elif (X > h[tengah]):
            kiri = tengah + 1
        else:
            hasil = tengah

    if hasil == 0:
        print("beri hadiah lain")
    else:
        print(hasil)

arr = [1, 2, 3, 4, 5]
binary_search(arr, 10)
binary_search(arr, 3)