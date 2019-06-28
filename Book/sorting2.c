#include <stdio.h>
int main()
{
    int n, t, i, j, m, x, index;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    x = 0;
    for(i = 0; i < n; i++)
    {
        m = 100000;
        for(j = x; j < n; j++)
        {
            if(a[j] < m)
            {
                m = a[j];
                index = j;
            }
        }
        t = a[i];
        a[i] = m;
        a[index] = t;
        x++;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
