#include <stdio.h>

int main(){
    /*int x, y;
    scanf("%d %d", &x, &y);
    int a[x][y], i, j;
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            scanf("%d", &a[i][j]);
        }
    }*/
    int a[5][5] = {{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}}, i, j;
    int sum = 0;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            sum = sum + a[i][j];
        }
        printf("Row: %d sum :%d\n", i+1, sum);
        sum = 0;
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
                sum = sum + a[j][i];
        }
        printf("column: %d sum :%d\n", i+1, sum);
        sum = 0;
    }
    return 0;
}
