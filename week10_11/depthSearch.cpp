#include <stdio.h>
#include <string.h>
#define MAX 101

int g[MAX][MAX], used[MAX];
int cnt, n, m, i, a, b, j, s;

void dfs(int v)
{
  used[v] = 1;
  cnt++;
  for (int i = 1; i <= n; i++)
    if ((g[v][i] == 1) && (used[i] == 0)) dfs(i);
}

int main(void)
{
  scanf("%d %d", &n,&s);
  for(i = 1; i <= n; i++)
  for(j = 1; j <= n; j++)
    scanf("%d", &g[i][j]);
memset (used, 0 ,sizeof(used));
  

  cnt = 0;
  dfs(s);
  printf("%d", cnt);
  return 0;
}