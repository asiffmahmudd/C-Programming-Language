#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    double a, r;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%lf", &a);
        r = (4*a*a)-(3.141592654*a*a)+pow(10, -9);
        printf("Case %d: %0.2lf\n", i, r);
    }
}
