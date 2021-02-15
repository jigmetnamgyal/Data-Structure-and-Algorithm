#include <stdio.h>
#include <math.h>


long long powmod(long long x, long long n) {
    if (n == 0) return 1;
    if (n % 2 == 0) return powmod((x * x), n / 2);
    return (x * powmod(x, n - 1));
}


int main() {
    long long n;
    scanf("%llu", &n);
    long long res = (powmod(n - 1, n - 1) * n);
    printf("%llu\n", res); 
}