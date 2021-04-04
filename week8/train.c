#include <stdio.h>

int main(){
    int m[100010];
    int tests;
    int n, res;
    scanf("%d", &tests);
    while (tests--){
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &m[i]);
    res = 0;
    for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
        if (m[i] > m[j]) res++;

    printf("Optimal train swapping takes %d swaps.\n", res);
    }
    

}