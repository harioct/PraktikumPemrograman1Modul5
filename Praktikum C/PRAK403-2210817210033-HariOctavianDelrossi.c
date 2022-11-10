    #include <stdio.h>
    int main(){
        int n1, n2, x, y;
        scanf("%d %d", &n1, &n2);
        if(n1 < n2){
            for(x = n1, y = n2; x <= n2, y >= n1; x++, y--){
                printf("%d %d", x, y);
                if(x == n2){
                    break;
                }
                else{
                    printf(" - ");
                }
            }
        }
        else{
            for(x = n1, y = n2; x >= n2, y <= n1; x--, y++){
                printf("%d %d", x, y);
                if(x == n2){
                    break;
                }
                else{
                    printf(" - ");
                }
            }
        }
        return 0;
    }