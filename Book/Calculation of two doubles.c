#include <stdio.h>
int main()
{
    double a, b , c;
    printf("Please enter a number: ");
    scanf("%lf", &a);
    printf("Please enter another number: ");
    scanf("%lf", &b);
    c = a + b;
    printf("%lf + %lf = %0.2lf\n", a, b, c);
    c = a - b;
    printf("%lf - %lf = %0.2lf\n", a, b, c);
    c = a * b;
    printf("%lf * %lf = %0.2lf\n", a, b, c);
    c = a / b;
    printf("%lf / %lf = %0.2lf\n", a, b, c);
    return 0;
}
