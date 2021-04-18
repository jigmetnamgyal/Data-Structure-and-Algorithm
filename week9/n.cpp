#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
    int n, m, x[10001][10001],a,b, y[10001], total=0, cnt = 0;
    scanf ("%d %d", &n, &m);
 ;
for (int i = 0; i < m; i++){
    scanf ("%d %d", &a, &b);
    a--; b--;
   y[a]++; y[b]++;
}
    for (int i = 0; i < n; i++){
        total += y[i];
    }
    for (int  i = 0; i < n; i++){
        if(y[i] == 1) {cnt ++;}
    }
    printf ("%d", cnt);
    return 0;
}