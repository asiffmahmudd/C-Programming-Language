#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n); getchar();
    char a[1000];
    for(i = 0; i < n; i++){
        gets(a);
        puts(a);
        for(j = 0; j < 5; j++){
            printf("%c", a[j]);
        }
        printf("\n");
    }
    return 0;
}
