#include <stdio.h>
int main ()
{
    int i, j, n, k, l, m;
    scanf("%d", &n);
    m = 2*n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("C");
        }
        for(k = 1; k <= m-2; k++)
        {
            printf(" ");
        }
        m = m-2;
        for(l = 1; l <= i; l++)
        {
            printf("C");
        }
        printf("\n");
    }
    return 0;
}
