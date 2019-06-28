#include <stdio.h>
int main ()
{
    int i, j, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("\n");
        for(j = n; j >= i; j--)
        {
            printf("%d", j);
        }
    }
    return 0;
}
