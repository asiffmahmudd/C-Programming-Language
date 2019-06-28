#include <stdio.h>
double avg(double n1, double n2, double average);
int main ()
{
    int n1, n2;
    double average;
    printf("Enter n1, n2: ");
    scanf("%d %d", &n1, &n2);
    average = avg(n1, n2, average);
    printf("%lf\n", average);
    return 0;
}
double avg(double n1, double n2, double average)
{
    average = (n1+n2)/2;
    return average;
}
