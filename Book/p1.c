#include <stdio.h>
int main()
{
    int x = 0, y = 0, n, i, a;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if(a >= 0) x++;
        else y++;
    }
    printf("%d %d", x, y);
}
