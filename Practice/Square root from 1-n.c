#include <stdio.h>
main ()
{
    int n, i;
    float s;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        s = sqrt(i);
        printf("%d\t %0.2f\n", i , s);
    }
}
