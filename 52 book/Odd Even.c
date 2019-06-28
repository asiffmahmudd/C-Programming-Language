#include <stdio.h>
#include <string.h>
int main(){
    int n, y, i;
    scanf("%d", &n);
    char s[101];
    for(i = 1; i <= n; i++){
        scanf("%s", &s);
        y = strlen(s) - 1;
        if(s[y] % 2 == 0) printf("even\n");
        else printf("odd\n");
    }
    return 0;
}
