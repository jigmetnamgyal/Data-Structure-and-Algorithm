#include <stdio.h>
// int gcd(int a, int b)
// {
//     if (a == 0)
//         return b;
//     if (b == 0)
//         return a;
//     if (a >= b)
//     {
//         return gcd(a % b, b);
//     }else{
//         return gcd(a, b % a);
//     }
// }
// int main(void)
// {
//     int a, b;
//     scanf("%d %d",&a, &b);
//     printf("%d", gcd(a,b));
// }

int gcd(int a, int b)
{
  return (b) ? gcd(b,a % b) : a;
}
int main(void)
{
    int a, b;
    scanf("%d %d",&a, &b);
    printf("%d", gcd(a,b));
}