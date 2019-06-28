#include <stdio.h>
int main()
{
    int i, n, j, m;
    scanf("%d", &n);
    getchar();
    for(i = 1; i <= n; i++)
    {
        char s[100];
        m = 0;
        gets(s);
        for(j = 0; j < 3; j++)
        {
            m = m + s[i];
        }
        printf("%d\n", m);
    }
    return 0;
}
