#include <stdio.h>
int main(){
    char c = 'a';
    char *p;
    p = &c;
    char **q;
    q = &p;

    printf("value of c: %c\n", c);
    printf("value of c: %c\n", *p);
    printf("value of c: %c\n", **q);

    printf("Address of c: %p\n", p);
    printf("Address of p: %p\n", q);
    printf("Address of q: %p\n", &q);
    return 0;
}
