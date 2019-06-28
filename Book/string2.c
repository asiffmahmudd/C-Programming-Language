#include <stdio.h>
#include <string.h>
void display(char a[]){
    int i, s = 0;
    for(i = 0; i < strlen(a); i++){
        if((a[i] >= 'a' && a[i] <= 'z') && s == 0){
            a[i] = 'A'+(a[i]- 'a');
            printf("%c", a[i]);
            s = 1;
        }
        else if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= '0' && a[i] <= '9') && s == 0){
            printf("%c", a[i]);
            s = 1;
        }
        else if((a[i] >= 'A' && a[i] <= 'z') || (a[i] >= '0' && a[i] <= '9')){
            printf("%c", a[i]);
        }
        else if(s == 1){
            printf("\n");
            s = 0;
        }
    }
}
int main(){
    char a[1000];
    gets(a);
    display(a);
    return 0;
}
