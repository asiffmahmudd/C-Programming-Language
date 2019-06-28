#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char binary[100];
    scanf("%s", &binary);
    int i, l, power, decimal = 0;
    l = strlen(binary);
    power = l - 1;
    for(i = 0; i < l; i++, power--){
        decimal += (binary[i]-48) * pow(2,power);
    }
    printf("%d", decimal);
    return 0;
}
