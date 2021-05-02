#include <stdio.h>
#include <string.h>
#define MAX 101

int g[MAX][MAX], used[MAX];
int cnt, n, m, i, a, b;

void dfs(int v)
{
  used[v] = 1;
  cnt++;
  for (int i = 1; i <= n; i++)
    if ((g[v][i] == 1) && (used[i] == 0)) dfs(i);
}

int main(void)
{
  scanf("%d %d", &n,&m);
  memset(g, 0, sizeof(g)); 
  memset(used, 0, sizeof(used));

  for(i = 0; i < m; i++)
  {
    scanf("%d %d", &a, &b);
    g[a][b] = g[b][a] = 1;
  }

  cnt = 0;
  dfs(1);
  if (cnt == n) printf("YES\n");
  else printf("NO\n");
  return 0;
}