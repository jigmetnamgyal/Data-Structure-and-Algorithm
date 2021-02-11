#include <stdio.h>
#include <string.h>

int fibarr[46];

int fib(int x){
    if (x==0 || x == 1) return 1;

    if(fibarr[x] != -1) return fibarr[x];

    return fibarr[x] = fib(x-1) + fib(x-2);
}
int main(void){
    int x;
    scanf("%d", &x);
    memset(fibarr,-1,sizeof(fibarr));
    printf("%d", fib(x));
}