#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
    int n, m, x[1001][1001],cnt = 0, cnt1 = 0;
    scanf ("%d", &n);

for (int i = 0; i < n; i++)
for (int j = 0; j < n; j++){
    scanf ("%d", &x[i][j]);
   
}
        for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (x[i][j] == 1) cnt++;
        }
            if (cnt == 1) cnt1 ++;
            cnt = 0;
        }
         printf ("%d",cnt1);   
    return 0;
}