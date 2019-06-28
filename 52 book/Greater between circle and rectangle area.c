#include <stdio.h>
int main(){
    int n, i, a, b, c;
    double x, y;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d%d%d", &a, &b, &c);
        x = 3.141592653589732*a*a;
        y = 2*(b+c);
        if(x < y) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
