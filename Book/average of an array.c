#include <stdio.h>
double find_avg(int ara[], double n, double average);
int main ()
{
    int ara [] = {1,2,3,5,5,6,7,8,9};
    int n = 9.0;
    double average = find_avg(ara, n, average);
    printf("%lf\n", average);
    return 0;
}
double find_avg(int ara[], double n, double average)
{
    int i, j = 0;
    for(i = 0; i < n; i++){
        j = j + ara[i];
    }
    average = j/n;
    return average;
}
