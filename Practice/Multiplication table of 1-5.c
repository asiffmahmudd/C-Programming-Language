#include <stdio.h>
int main ()
{
    int n, i, m, x = 0;
    for (n = 1; n <= 5; n++) {
            x = n;
        for (i = 1; i <= 10; i++) {

            printf("%d * %d = %d\n", n, i, x);
            x = x + n;
        }
    }
    return 0;
}
