n1 = 1
while n1 != 5:
        print("Pilih program \n1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian \n5. Exit")
        pil = float(input("Masukkan Pilihan: "))
        if pil == 5:
            print("Terimakasih, telah menggunakan kalkulator Hari Octavian Delrossi\n")
            break
        elif pil < 0 or pil > 5: print("Input anda salah, silahkan coba lagi\n")
        else: 
            n1 = float(input("Masukkan nilai pertama: "))
            n2 = float(input("Masukkan nilai kedua: "))
            if pil == 1: 
                hasil = n1 + n2 
                print("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n"%(n1, n2, hasil))
            elif pil == 2: 
                hasil = n1 - n2 
                print("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n"%(n1, n2, hasil))
            elif pil == 3: 
                hasil = n1 * n2 
                print("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n"%(n1, n2, hasil))
            else: 
                hasil = n1 / n2 
                print("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n"%(n1, n2, hasil))