#include <stdio.h>
int main ()
{
    char c;
    int a, b;
    float r;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a,&b);
    getchar();
    printf("Enter sign:\n");
    scanf("%c", &c);
    switch(c)
    {
        case '+': r = a+b;
        printf("%f", r);
        break;
        case '-': r = a-b;
        printf("%f", r);
        break;
        case '*': r = a*b;
        printf("%f", r);
        break;
        case '/': r = a/b;
        printf("%f", r);
        break;
    }
    return 0;
}
