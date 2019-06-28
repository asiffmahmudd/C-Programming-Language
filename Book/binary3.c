#include <stdio.h>
int main(){
    int decimal;
    scanf("%d", &decimal);
    int a[100], i = 0, k,j, temp;

    while(decimal != 0){
        a[i] = decimal % 2;
        printf("%d ", a[i]);
        i++;
        decimal = (int)(decimal / 2);
    }
    printf("\n");
    k = i;
    for(i = 0; i < 100; i++){
        printf("%d ", a[i]);
    }
    /*
    for(j = 0; j < i; j++, k--){
        temp = a[j];
        a[j] = a[k];

    }*/
    return 0;
}
