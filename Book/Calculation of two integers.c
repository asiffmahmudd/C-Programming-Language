#include <stdio.h>
int main ()
{
    int a, b, result;
    printf("Please enter a number: ");
    scanf("%d", &a);
    printf("Please enter another number: ");
    scanf("%d", &b);
    result = a + b;
    printf("%d + %d = %d\n", a, b , result);
    result = a - b;
    printf("%d - %d = %d\n", a, b, result);
    result = a * b;
    printf("%d * %d = %d\n", a, b, result);
    result = a/b;
    printf("%d / %d = %d\n", a, b, result);
    return 0;
}
