#include <stdio.h>
int find_sum(int ara[], int n, int sum);
int main ()
{
    int ara[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int sum = find_sum(ara, n, sum);
    printf("%d", sum);
    return 0;
}
int find_sum(int ara[], int n, int sum)
{
    int i, j = 0;
    for(i = 0; i < n; i++){
        j = j + ara[i];
    }
    sum = j;
    return sum;
}
