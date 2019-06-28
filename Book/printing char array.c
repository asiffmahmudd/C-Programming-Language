#include <stdio.h>
int main()
{
    char saarc[7][100] = {"Bangladesh", "Bhutan", "Maldives", "Sri lanka", "India", "Pakistan", "Nepal"};
    int row;
    for(row = 0; row < 7; row++)
    {
        printf("%s\n", saarc[row]);
    }
    return 0;
}
