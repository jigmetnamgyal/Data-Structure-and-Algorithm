#include <stdio.h>

int recursion1(int n){
    if (n == 0) return 0;
    return recursion1(n-1) + n;
}
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",recursion1(n));
}