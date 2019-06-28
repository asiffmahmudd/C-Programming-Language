#include <stdio.h>
int main()
{
    int a[98], b[98], i, j = 2, n, k;
    for(i = 0; i < 98; i++)
    {
        a[i] = j;
        j++;
    }
    for(i = 0; i < 98; i++)
    {
        b[i] = 0;
    }
    scanf("%d", &n);
    for(i = n; i > 0; i--)
    {
        k = i;
        for(j = 0; j < k-1; j++)
        {
            if(k % a[j] == 0)
            {
                while(k % a[j] == 0)
                {
                    b[j]++;
                    k = k/a[j];
                }
            }
        }
    }
    printf("%d! = ", n);
    for(i = 0; i < 98; i++)
    {
        if(b[i] > 0) printf("{%d, %d}, ", a[i], b[i]);
    }
    return 0;
}
