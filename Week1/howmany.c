#include <stdio.h>

int howMany(int n, int k){
    if (n == k) return 1;
    if (k == 0) return 1;
    return howMany(n-1, k-1) + howMany(n-1, k);
}
int main(void){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    printf("%d", howMany(n,k));
}