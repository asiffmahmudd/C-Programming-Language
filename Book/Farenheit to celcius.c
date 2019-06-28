#include <stdio.h>
int main ()
{
    double c, f;
    printf("Enter the temperature in farenheit: ");
    scanf("%lf", &f);
    c = (f - 32) / 1.8;
    printf("The temperature in celsius is: %lf", c);
    return 0;
}
