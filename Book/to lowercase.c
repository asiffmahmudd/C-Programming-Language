#include <stdio.h>
int main()
{
    char country[] = {'B', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H'};
    int length, i;
    length = 10;
    printf("%s\n", country);
    for(i = 0; i < length; i++)
    {
        if(country[i] >= 65 && country[i] <= 96)
        {
            country[i] = 'a' + (country[i] - 'A');
        }
    }
    printf("%s\n", country);
    return 0;
}
