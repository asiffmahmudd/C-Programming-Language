#include <stdio.h>
#include <string.h>
int main ()
{
    int n, i, y, j;
    char x[1000];
    scanf("%d", &n); getchar();
    for(i = 0; i < n; i++)
    {
        gets(x);
        int ans = 1;
        for(j = 0; j < strlen(x); j++)
        {
            if(x[j] == ' ') continue;
            if(x[j] >= '1' && x[j] <= '9')
            {
                ans = ans * x[j];
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
