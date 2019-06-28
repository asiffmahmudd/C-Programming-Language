#include <stdio.h>
int main ()
{
    char c = 'v';
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("%c is vowel\n", c);
    }
    else {
        printf("%c is consonant\n", c);
    }
    return 0;
}
