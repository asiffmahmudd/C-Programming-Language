#include <stdio.h>
int main()
{
    int n, s, h, m;
    scanf("%d", &n);
    h = n/3600;
    n = n%3600;
    m = n/60;
    s = n%60;
    printf("%d hours %d min %d seconds", h, m, s);
    return 0;
}
