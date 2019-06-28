#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("\n");
        for(j = 1; j <= i; j++)
        {
            printf(" ");
            for(k = 1; k <= j; k++)
            {
                printf("*");
            }
        }
    }
    return 0;
}
