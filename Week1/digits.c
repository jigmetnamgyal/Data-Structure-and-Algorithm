#include <stdio.h>

int main(void){
    int n, count = 0;
    scanf("%d",&n);
    if(n == 0){
        count = 1;
    }

    while(n > 0){
        n/=10;
        count++;
    }
    printf("%d", count);
}