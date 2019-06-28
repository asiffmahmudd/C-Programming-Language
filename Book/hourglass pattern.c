#include <stdio.h>
int main ()
{
    int i, j, n, k = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i = i+2)
    {
        for(j = i; j <= n; j++)
        {
            printf("C");
        }
        printf("\n");
        if (i == n) continue;
        else
        {
            for(j = 1; j <= k; j++)
            {
                printf(" ");
            }
            k++;
        }
    }
    k = k - 2;
    for(i = 3; i <= n; i = i+2)
    {
        for(j = 1; j <= k; j++)
        {
            printf(" ");
        }
        k--;
        for(j = 1; j <= i; j++)
        {
            printf("C");
        }
        printf("\n");
    }
    return 0;
}
