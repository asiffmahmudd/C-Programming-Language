#include <stdio.h>
#include <math.h>
int main(){
    int i,x,z, k;
    scanf("%d", &x);
    k = 1;
    k = k+ pow(10, 1);
    k = k+ pow(10,2);
    k = k+ pow(10, 3);
    z = pow(10, x-1);
    printf("%d\t%d", z,k);
    return 0;
}
