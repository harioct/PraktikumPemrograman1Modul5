#include <stdio.h>
int main(){
    int pil;
    float n1, n2, hasil;
    while(pil != 5){
        printf("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan: ");scanf("%d", &pil);
        if(pil>5 || pil <= 0){
            printf("Input anda salah, silahkan coba lagi\n\n");
        }
        else if(pil == 5){
            printf("Terimakasih, telah menggunakan kalkulator Hari Octavian Delrossi\n\n");
        }
        else{
            printf("Masukkan nilai pertama: ");scanf("%f", &n1);
            printf("Masukkan nilai kedua: ");scanf("%f", &n2);
            if(pil == 1){
                hasil = n1 + n2;
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", n1,n2,hasil);
            }
            else if(pil == 2){
                hasil = n1 - n2;
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", n1,n2,hasil);
            }
            else if(pil == 3){
                hasil = n1 * n2;
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n", n1,n2,hasil);
            }
            else{
                hasil = n1 / n2;
                printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n", n1,n2,hasil);
            }
        }
    }
    return 0;
}