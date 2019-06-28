#include <stdio.h>
int main(){
    int n, i, j, max, min;
    int a[5];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
        max = a[0];
        min = a[0];
        for(j = 0; j < 5; j++){
            if(a[j] > max) max = a[j];
        }
        for(j = 0; j < 5; j++){
            if(a[j] < min) min = a[j];
        }
        printf("%d %d\n", max, min);
    }
    return 0;
}
