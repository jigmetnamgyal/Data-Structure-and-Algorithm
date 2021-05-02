#define MAX 101
#include <stdio.h>
#include <string.h>
using namespace std;
int i, j, n,m, c, res;
int g[MAX][MAX], used[MAX];
void dfs(int v)
{
 used[v] = 1;
 for (int i = 1; i <= n; i++)
 if ((g[v][i] == 1) && (used[i] == 0)) dfs(i);
}
int main()
{
 scanf ("%d", &n); 

for (i = 0; i < n; i++)
for (j = 0; j < n; j++)
scanf ("%d", &g[i][j]);
for (int i = 0; i < n; i++) {
      if (used[i] == 0) {
        dfs(i); res++;
      }
    }
    printf ("%d", res);
    return 0;
}