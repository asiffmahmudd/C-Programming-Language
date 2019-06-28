#include <stdio.h>

void display(char a[]){
    int i, s = 1;
    for(i = 0; i < strlen(a); i++){
        if(a[i] >= 'A' && a[i] <= 'z' && s == 1){
            a[i] = 'A'+(a[i]- 'a');
            printf("%c", a[i]);
            s = 0;
        }
        else if(a[i] >= 'A' && a[i] <= 'z'){
            printf("%c", a[i]);
        }
        else if(a[i-1] >= 'A' && a[i-1] <= 'z' && a[i] == ' '){
            printf("\n");
            s = 1;
        }
        else{
            continue;

        }
    }
}
int main(){
    char a[1000];
    gets(a);
    display(a);
    return 0;
}
