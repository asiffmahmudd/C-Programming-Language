#include <stdio.h>
int main ()
{
    int x, y, gcd, min, i;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    if(x < y)
    {
        min = x;
    }
    else
    {
        min = y;
    }
    for(i = 1; i <= min; i++)
    {
        if(x%i == 0 && y%i == 0)
        {
            gcd = i;
        }
    }
    printf("%d", gcd);
    return 0;
}
