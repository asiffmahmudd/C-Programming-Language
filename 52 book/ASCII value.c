#include <stdio.h>
int main(){
    int x, i, j, m;
    scanf("%d", &x);
    for(i = 1; i <= x; i++){
        char s[1000000];
        scanf("%s", &s);
        m = 0;
        for(j = 0; j < 3; j++){
            m = m + s[j];
        }
        printf("%d\n", m);
    }
    return 0;
}
