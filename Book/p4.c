#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, k;
    char a[50];
    scanf("%d", &n);
    int x[n], y;
    for(i = 1; i <= n; i++)
    {
        y = 0;
        gets(a);
        k = strlen(a);
        for(j = 0; j < k; j++)
        {
            y = y + a[j];
        }
        x[i] = y;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d\n", x[i]);
    }
}
