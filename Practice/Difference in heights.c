#include <stdio.h>
struct height
{
    int f;
    int i;
};
main()
{
    int d;
    struct height x, y, r;
    printf("Enter 1st person height feet: ");
    scanf("%d", &x.f);
    printf("Enter 1st person height inch: ");
    scanf("%d", &x.i);
    printf("Enter 2nd person height feet: ");
    scanf("%d", &y.f);
    printf("Enter 2nd person height inch: ");
    scanf("%d", &y.i);
    d = (x.f - y.f) * 12 + x.i - y.i;
    r.f = d/12;
    r.i = d%12;
    printf("%d feet %d inch", r.f, r.i);
}
