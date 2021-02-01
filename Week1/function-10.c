#include <stdio.h>

int factorial10(int m, int n){
    if (m == 0) return 1;
    if (m == n) return 1;
    return factorial10(m-1,n-1) + factorial10(m,n-1);
}

int main(void){
    int n, m;
    scanf("%d",&n);
    scanf("%d",&m);
    printf("%d", factorial10(m,n));
}