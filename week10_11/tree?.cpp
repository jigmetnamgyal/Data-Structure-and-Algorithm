#define MAX 101
#include <stdio.h>
#include <string.h>
using namespace std;
int i, j, n, c, edges;
int g[MAX][MAX], used[MAX];
void dfs(int v)
{
 used[v] = 1;
 c++;
 for (int i = 1; i <= n; i++)
 if ((g[v][i] == 1) && (used[i] == 0)) dfs(i);
}
int main()
{
 scanf ("%d", &n); c = edges = 0;
 memset(used,0,sizeof(used));
for (i = 1; i <= n; i++)
for (j = 1; j <= n; j++)
{scanf ("%d", &g[i][j]); edges += g[i][j];}
dfs(1);
edges /= 2;
if ((edges == n-1) && (c == n)) printf ("YES\n"); else printf("NO\n");
    return 0;
}