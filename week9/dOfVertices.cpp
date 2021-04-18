#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int deg[101], g[101][101];
    int n, i, j;
    scanf("%d", & n);
    for (i = 1; i <= n; i++) 
    for (j = 1; j <= n; j++) 
        scanf("%d", & g[i][j]);

    for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
        deg[i] += g[i][j];

    int res = 0;
    for (i = 1; i <= n; i++)
        printf("%d\n", deg[i]);
}