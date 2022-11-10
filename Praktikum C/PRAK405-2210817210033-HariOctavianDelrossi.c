#include <stdio.h>
int main(){
    int a, b, p, q, x, y, i, hasil, total;
    scanf("%d %d", &a, &b);
    for(i = 1; i <= a; i++){
        for(p = i; p > 1; p--){
            printf("(%d * %d) + ", p, b);
        }
        for(q = 1, hasil = q * b; q < i; q++, hasil += (q * b)){}
        printf("(%d * %d) = %d\n", p, b, hasil);
    }
    for(x = 1, y = 1, total = 0; x <= a; y+= x + 1, x++){
        total += y*b;
    }
    printf("%d", total);
    return 0;
}