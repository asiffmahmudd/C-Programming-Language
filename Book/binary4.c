#include <stdio.h>

int convert(int x){
    int i, p, m, n = 1, o, binary;
    while(pow(2, n) < x){
        m = pow(2, n);
        n++;
    }
    n--;
    o = n;
    if(m < x) binary = 1;
    else binary = 0;
    n--;
    for(i = 0; i < o; i++, n--){
        p = m + pow(2, n);
        printf("p:%d m:%d\n", p, m);
        if(p < x){
            binary = (binary * 10) + 1;
            m = p;
        }
        else binary = binary * 10;
    }
    return binary;
}

int main(){
    int decimal, binary;
    scanf("%d", &decimal);
    binary = convert(decimal);
    printf("%d", binary);

    return 0;
}
