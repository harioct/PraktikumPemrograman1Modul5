#include <stdio.h>
int main(){
    int angka, ganjil, genap;
    scanf("%d", &angka);
    for(ganjil = 1; ganjil <= angka; ganjil++){
        if(ganjil % 2 == 1){
            printf("%d ", ganjil);
        }
    }
    printf("\n");
    for(genap = angka; genap >= 1;genap--){
        if(genap % 2 == 0){
            printf("%d ", genap);
        }
    }
    return 0;
}