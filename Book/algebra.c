#include <stdio.h>
int main()
{
    int a, b; //a = x+y, b = x-y
    double x, y;
    scanf("%d", &a);
    scanf("%d", &b);

    x = (a+b)/2.0;
    y = a-x;

    printf("%0.2f, %0.2f", x,y);
    return 0;
}
