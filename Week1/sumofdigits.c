#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    if (n < 10)
        return n;

    return n % 10 + sumOfDigits(n / 10);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    n = abs(n);
    printf("%d", sumOfDigits(n));
}