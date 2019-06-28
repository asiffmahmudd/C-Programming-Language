#include <stdio.h>
int main ()
{
    int p1 = 0, p2 = 1, n, m, i;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n == 1) printf("1");
    else{
        printf("1\n");
        for(i = 2; i <= n; i++)
        {
            m = p1 + p2;
            p1 = p2;
            p2 = m;
            printf("%d\n", m);
        }
    }
    return 0;
}
