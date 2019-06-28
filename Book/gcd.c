#include <stdio.h>
int main(){

    int gcd,i,a,b,x;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b){
        x = b;
    }
    else{
        x = a;
    }

    for(i = x; i > 0; i--){
        if(a%i == 0 && b%i == 0) {
            gcd = i;
            break;
        }
    }
    printf("%d", gcd);
    return 0;
}
