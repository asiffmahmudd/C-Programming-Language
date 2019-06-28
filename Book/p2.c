#include <stdio.h>
#include <string.h>
int main ()
{
    int n, i, y, j;
    char x[1000];
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        y = 1;
        gets(x);
        for(j = 0; j < strlen(x); j++)
        {
            if(x[j] == ' ') y++;
        }
        a[i] = y;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
