#include <stdio.h>
int main ()
{
    int i, j, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= n; j++)
        {
            printf("C");
        }
        printf("\n");
    }
    for(i = 2; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("C");
        }
        printf("\n");
    }
    return 0;
}
