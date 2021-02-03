#include <stdio.h>

int main(void){
    long long x, n, m;
    scanf("%lld %lld %lld", &x, &n, &m);
    long long res = 1;
    for (int i = 1; i <= n; i++)
        res = (res * x);
    printf("%lld\n", res % m);
}