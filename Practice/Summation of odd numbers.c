#include <stdio.h>
int main ()
{
    int i, n, sum;
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++) {
        sum = sum + i;
        if (sum % 2 == 0) {
            continue;
        }
    }
    printf("summation is %d\n", sum);
    return 0;
}
