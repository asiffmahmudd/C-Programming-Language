#include <Stdio.h>
int main()
{
    int i, j, n, m, ind;
    printf("Enter array element: ");
    scanf("%d", &n);
    int a[n], b[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter a integer: ");
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        m = 100000;
        for(j = 0; j < n; j++)
        {
            if(a[j] < m)
            {
                m = a[j];
                ind = j;
            }
        }
        a[ind] = 99999999;
        b[i] = m;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d\n", b[i]);
    }
}
