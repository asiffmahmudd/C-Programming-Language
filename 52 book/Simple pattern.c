#include <stdio.h>
int main(){
    int n, i, m, k, l;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &m);
        for(k = 0; k < m; k++){
            for(l = 0; l < m; l++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
