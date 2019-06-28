#include <stdio.h>
int main()
{
    int r, s, a, y;
    scanf("%d %d %d", &r, &s, &a);
    if(r < s) y = r;
    else y = s;
    if(a < y) y = a;
    else y = y;
    printf("%d", y);
    return 0;
}
