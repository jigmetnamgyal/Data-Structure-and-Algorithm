#include <stdio.h>
#include <string.h>
using namespace std;
#define MAX 110

int main() {
    int g[MAX][MAX];
    int n, i, j, a, b, m;
    scanf("%d %d", & n, & m);
    memset(g, 0, sizeof(g));
    for (i = 0; i < m; i++) {
        scanf("%d %d", & a, & b);
        g[a][b] = g[b][a] = 1;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) 
            printf("%d ", g[i][j]);
        printf("\n");
    }

}