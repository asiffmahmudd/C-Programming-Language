#include <stdio.h>
int main(){
    int i, j, a[10][10], even = 0, odd = 0, sum = 0;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            a[i][j] = (i+1) * (j+1);
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(a[i][j]%2 == 0){
                even++;
            }
            else{
                odd++;
            }
            sum = sum + a[i][j];
        }
    }
    printf("%d  %d  %d", even, odd, sum);

    return 0;
}
