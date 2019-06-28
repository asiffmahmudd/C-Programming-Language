#include <stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int a[x][y], i, j;
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

