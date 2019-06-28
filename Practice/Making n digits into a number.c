#include <stdio.h>
int main ()
{
    int m, n, i = 1, c = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    while(i <= n)
    {
        printf("Enter a digit: ");
        scanf("%d", &m);
        c = c * 10;
        c = c + m;
        i++;
    }
    printf("%d", c);
    return 0;
}
