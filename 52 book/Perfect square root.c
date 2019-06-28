#include <stdio.h>
#include <math.h>
int main(){
    int n, i, x, y, j, k;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        y = sqrt(x);
        k = 0;
        for(j = 2; j <= y; j++){
            if(j*j == x) k = 1;
        }
        if(k == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
