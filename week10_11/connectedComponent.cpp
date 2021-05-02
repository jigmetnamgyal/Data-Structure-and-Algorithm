#include <stdio.h>
#include <string.h>
#define MAX 102

int n, i, j, res;
int g[MAX][MAX], used[MAX];

void dfs(int v)
{
  used[v] = 1;
  for(int i = 0; i < n; i++)
    if (g[v][i] && !used[i]) dfs(i);
}

int main(void)
{
  //freopen("2269.in","r",stdin);
  scanf("%d",&n);
  for(i = 0; i < n; i++)
  for(j = 0; j < n; j++)
    scanf("%d",&g[i][j]);

  memset(used,0,sizeof(used));
  res = 0;
  for(i = 0; i < n; i++)
    if (!used[i])
    {
      dfs(i);
      res++;
    }

  printf("%d\n",res);
  return 0;
}