#include <stdio.h>
int main ()
{
    int i, j, n, k;
    scanf("%d", &n);
    for(i = 1; i <= n; i = i+2)
    {
        for(j = i; j <= n; j++)
        {
            printf("C");
        }
        for(k = 1; k <= i; k++)
        {
            printf(" ");
        }
        printf("\n");

    }
    return 0;
}
