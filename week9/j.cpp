#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
    int n, m, x[101][101],a ,b, c;
    scanf ("%d %d", &n, &m);
    memset(x,0,sizeof(x));
for (int i = 0; i < m; i++){
    scanf ("%d %d", &a, &b);
    a--; b--;
    x[a][b] = x[b][a] = 1;
}
        for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((x[i][j] != 1) && (i != j)) { c++; printf ("NO"); return 0;}}}
            
            if (c == 0) printf ("YES");
    return 0;
}