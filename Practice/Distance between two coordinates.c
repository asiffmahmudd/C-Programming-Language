#include <stdio.h>
#include <math.h>
struct point
{
    double x;
    double y;
};
main ()
{
    struct point p1, p2;
    double d, dx, dy;
    printf("Enter x1: ");
    scanf("%lf", &p1.x);
    printf("Enter y1: ");
    scanf("%lf", &p1.y);
    printf("Enter x2: ");
    scanf("%lf", &p2.x);
    printf("Enter y2: ");
    scanf("%lf", &p2.y);
    dx = p1.x - p2.x;
    dy = p1.y - p2.y;
    d = sqrt(dx*dx + dy*dy);
    printf("%lf", d);
}
