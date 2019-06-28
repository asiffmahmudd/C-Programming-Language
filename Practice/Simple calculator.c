#include <stdio.h>
int main()
{
    int a, b, c;
    char sign;
    printf("enter a number :");
    scanf("%d", &a);
    printf("enter another number :");
    scanf("%d", &b);
    getchar();
    printf("enter a sign :");
    sign = getchar();
    if (sign == '+') {
        c = a + b;
        printf("%d %c %d = %d", a, sign, b, c);
    }
    else if (sign == '-') {
        c = a - b;
        printf("%d %c %d = %d", a, sign, b, c);
    }
    else if (sign == '*') {
        c = a * b;
        printf("%d %c %d = %d", a, sign, b, c);
    }
    else if (sign == '/') {
        c = a / b;
        printf("%d %c %d = %d", a, sign, b, c);
    }
    return 0;
}
