#include <stdio.h>
#include <string.h>
int checksub(char a[], char b[]){
    int f, i , j, k;
    for(i = 0; i < strlen(a); i++){
        if(a[i] == b[0]){
            f = 1;
            for(j = 0; j < strlen(b); j++, i++){
                if(a[i] != b[j]){
                    f = 0;
                    break;
                }
            }
        }
        if(f == 1) break;
        else continue;
    }
    return f;
}
int main(){
    int n, i, x;
    scanf("%d", &n);
    getchar();
    char a[1000], b[1000];
    for(i = 1; i <= n; i++){
        gets(a);
        gets(b);
        x = checksub(a,b);
        printf("%d\n", x);
    }
    return 0;
}
