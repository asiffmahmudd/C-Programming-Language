#include <stdio.h>
int r(int A[], int N, int V);
main()
{
    int V, N, result, i;
    printf("How many numbers you want to put in the array: ");
    scanf("%d", &N);
    int a[N];
    printf("Enter the integers: ");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to delete: ");
    scanf("%d", &V);
    result = r(a, N, V);
    if (result == 1) printf("%d is not in the array", V);
    else
    {
        for(i = 0; i < N-1; i++)
        {
            printf("%d\n", a[i]);
        }
    }
}
int r(int A[], int N, int V)
{
    int i, p = 0;
    for(i = 0; i < N; i++)
    {
        if(A[i] == V)
        {
            p = 1;
            break;
        }
    }
    if (p == 1)
    {
        for(i; i < N; i++)
        {
            A[i] = A[i+1];
        }
        A[N-1] = 0;
        return A[N];
    }
    else return 1;
}
