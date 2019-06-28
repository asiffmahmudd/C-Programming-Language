#include <stdio.h>
#include <math.h>
#include <string.h>
int main ()
{
    char binary[100];
    int i, l, p, d = 0;
    printf("Enter binary number: ");
    gets(binary);
    l = strlen(binary);
    p = l - 1;
    for(i = 0; i < l; i++)
    {
        d = d + (binary[i] - '0') * pow(2, p);
        p--;
    }
    printf("%d", d);
    return 0;
}
