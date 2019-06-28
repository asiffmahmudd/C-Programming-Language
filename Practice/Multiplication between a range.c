#include <stdio.h>
main ()
{
    int a, b, m = 1, i;
    printf("Enter a and b:");
    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++)
    {
        m = m*i;
    }
    printf("%d", m);
}
