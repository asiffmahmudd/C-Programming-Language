#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0, n;
    char a[1000];
    char *b;
    scanf("%d", &n);
    getchar();
    for(i = 1; i <= n; i++)
    {
        gets(a);
        *b = strtok(a, " ");
        while(b != NULL)
        {
            j++;
            b = strtok(NULL, " ");
        }
        printf("%d\n", j+1);
    }
    return 0;
}
