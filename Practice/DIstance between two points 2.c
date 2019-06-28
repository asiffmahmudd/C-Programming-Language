#include <math.h>
struct point {
    double x;
    double y;
};
main(){

    struct point p1,p2;
    double dx,dy,d;
    p1.x = 5;
    p1.y = 4;
    printf("Enter first point:\nx: ");
    scanf("%lf",&p1.x);
    printf("y: ");
    scanf("%lf",&p1.y);
    printf("Enter second point:\nx: ");
    scanf("%lf",&p2.x);
    printf("y: ");
    scanf("%lf",&p2.y);
    dx = p1.x - p2.x;
    dy = p1.y - p2.y;
    d = sqrt(dx*dx+dy*dy);
    printf("Distance: %lf",d);
}
