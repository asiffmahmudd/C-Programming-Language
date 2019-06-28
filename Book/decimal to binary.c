#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
    int i, j, d, b, m, n;
    printf("Enter a decimal number: ");
    scanf("%d", &d);
    for(i = 1; pow(2, i) < d; i++)
    {
        m = pow(2, i);
    }
    n = i - 2;
    char s[n+2];
    s[0] = '1';
    for(i = n, j = 1; j < n+2; i--, j++)
    {
        if(m + pow(2, i) > d) s[j] = '0';
        else
        {
            s[j] = '1';
            m = m + pow(2,i);
        }
    }
    puts(s);
    return 0;
}
