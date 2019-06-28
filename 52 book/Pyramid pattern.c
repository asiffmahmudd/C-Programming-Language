#include <stdio.h>
void pyramid(int o){
    int m, n, k;
    int y = o;
    int l = 3;
    for(m = 1; m <= o; m++, y--){
        for(n = 1; n <= y-1; n++){
            printf(" ");
        }
        if(m == 1) printf("*\n");
        else if(m > 1){
            for(k = 1; k <= l; k++){
                printf("*");
            }
            l += 2;
            printf("\n");
        }
    }
}
int main(){
    int i, x, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        pyramid(x);
    }
    return 0;
}
