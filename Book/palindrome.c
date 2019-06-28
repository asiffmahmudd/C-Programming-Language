#include <stdio.h>
int main ()
{
    int x, i, j, f = 0;
    char a[50];
    gets(a);
    x = strlen(a);
    for(i = 0, j = x-1; i < x-1, j >= 0; i++, j--)
    {
        if(a[i] != a[j]) f = 1;
    }
    if(f == 1) printf("Not palindrome");
    else printf("Palindrome");
    return 0;
}
