#include <stdio.h>
int main ()
{
    int i, j, x, y, n, m, c = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("\n");
        scanf("%d", &x);
        m = 0;
        for(j = 1; j <= x; j++)
        {
            scanf("%d", &y);
            if(y < 0) continue;
            else m = m + y;
        }
        printf("Case: %d: %d\n", c, m);
        c++;
    }
    return 0;
}
