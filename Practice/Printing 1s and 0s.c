#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("\n");
        for(j = 1; j <= n; j++)
        {
            if (i%2 != 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    }
    return 0;
}
