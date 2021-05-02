#include <stdio.h>
#include <string.h>
#define MAX 51

int n, i, j, flag;
int g[MAX][MAX], used[MAX];

void dfs(int v)
{
  // mark vertex v as GRAY, make an entrance to v
  used[v] = 1;

  // we try to go from v to i, i = 1,2,:,n
  for (int i = 1; i <= n; i++)
    // if there exists an edge from v to i
    if (g[v][i])
    {
       // if vertex i is GRAY, we meet cycle
       if (used[i] == 1) flag = 1;
       // if vertex i is not visited, run dfs from there
       else if (used[i] == 0) dfs(i);
      // if vertex i is black (used[i] = 2), do nothing
    }
  // mark vertex v as BLACK, make an exit from v
  used[v] = 2;
}

int main(void)
{
  scanf("%d", &n);
  // read adjacency matrix
  for (i = 1; i <= n; i++)
  for (j = 1; j <= n; j++)
    scanf("%d", &g[i][j]);

  flag = 0;
  // run dfs on directed graph like on disconnected graph
  for (i = 1; i <= n; i++)
    if (used[i] == 0) dfs(i);

  printf("%d\n", flag);
  return 0;
}