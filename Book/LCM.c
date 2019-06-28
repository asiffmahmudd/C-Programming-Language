#include <stdio.h>
int main ()
{
    int a, b, c, gcd, lcm;
    scanf("%d %d", &a, &b);
    if (a < b) {
        c = a;
    }
    else {
        c = b;
    }
    for (; c >= 1; c--) {
        if (a % c == 0 && b % c == 0) {
            gcd = c;
            break;
        }
    }
    lcm = a * b / gcd;
    printf("lcm = %d", lcm);
    return 0;
}
