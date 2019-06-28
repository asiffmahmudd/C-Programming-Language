#include <stdio.h>
double pi = 3.1416;
double circle_area(int r, double a);
int main ()
{
    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    double a = circle_area(r, a);
    printf("%lf\n", a);
    return 0;
}
double circle_area(int r, double a)
{
    a = pi*r*r;
    return a;
}
