#include <stdio.h>

int main(){
    int a,b,c,d,remainder;
    scanf("%d", &a);
    scanf("%d", &b);

    c = (int)(a/b);
    d = c*b;

    remainder = a-d;

    printf("%d", remainder);

    return 0;
}
