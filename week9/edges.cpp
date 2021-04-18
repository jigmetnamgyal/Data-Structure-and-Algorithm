#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int g[101][101];
    int n, m, a, b, i, j, flag;
    scanf("%d %d", &n, &m);
    flag = 0;
    for (i = 0; i < m; i++){
        scanf("%d %d", &a, &b);
        g[a][b]++;
        if (g[a][b] > 1) flag = 1;
    }
    if (flag) 
        puts("YES");
    else 
        puts("NO");
}