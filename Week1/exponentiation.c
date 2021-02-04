#include <stdio.h>
#include <stdlib.h>

int exponent(int x, int n){
    if (n == 0) return 1;
    if (n % 2 == 0) return exponent(x * x, n/2);
    return x * exponent(x, n-1);
}
int main(void){
    long long x, n;
    scanf("%lld %lld", &x, &n);
    x = abs(x);
    n = abs(n);
    printf("%d", exponent(x,n));
}