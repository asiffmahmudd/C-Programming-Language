#include <stdio.h>
int main(){
    int lcd,i,a,b,s, x, y;
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    if(a>b){
        s = b;
    }
    else{
        s = a;
    }
    lcd = 1;
    for(i = 2; i <= s; ){
        if(x%i == 0 && y%i == 0){
            lcd = lcd*i;
            x = x/i;
            y = y/i;
        }
        else{
            i++;
        }
    }
    lcd = lcd*x*y;
    printf("%d", lcd);
    return 0;
}
