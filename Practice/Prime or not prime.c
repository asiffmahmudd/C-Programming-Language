#include <stdio.h>
int main ()
{
    int n, i, f = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            f = 1;
            break;
        }
    }
    if(f == 1)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
    return 0;
}
