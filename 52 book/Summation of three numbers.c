#include <stdio.h>
int main(){
    int n, i, m, j;
    scanf("%d", &n);
    int a[3];
    for(i = 0; i < n; i++){
        m = 1;
        scanf("%d%d%d", &a[0], &a[1], &a[2]);
        for(j = 0; j < 3; j++){
            m = m*a[j];
        }
        printf("%d\n", m);
    }
    return 0;
}
