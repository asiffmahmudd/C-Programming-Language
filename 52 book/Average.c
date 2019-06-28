#include <stdio.h>
int main(){
    int n, i;
    double m;
    scanf("%d", &n);
    int a[5];
    for(i = 1; i <= n; i++){
        scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
        m = (a[0]+a[1]+a[2]+a[3]+a[4])/5.00;
        printf("%lf\n", m);
    }
    return 0;
}
