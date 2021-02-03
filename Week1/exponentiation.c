#include <stdio.h>

int exponent(int x, int n){
    if (n == 0) return 1;
    if (n % 2 == 0) return exponent(x * x, n/2);
    return x * exponent(x, n-1);
}
int main(void){
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%d", exponent(x,n));
}