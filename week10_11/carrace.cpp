#include <stdio.h>
#include <string.h>
#define MAX 1010

int n, m, i, u, v, flag;
int g[MAX][MAX], used[MAX];

void dfs(int v, int prev = -1)
{
  used[v] = 1;
  for(int i = 1; i <= n; i++)
    if ((i != prev) && g[v][i] == 1)
      if (used[i] == 1) flag = 1; else dfs(i,v);
}

int main(void) 
{ 
  //freopen("1390.in","r",stdin);
  scanf("%d %d",&n,&m);
  memset(g,0,sizeof(g));
  memset(used,0,sizeof(used));

  for(i = 0; i < m; i++)
  {
    scanf("%d %d",&u,&v);  
    g[u][v] = g[v][u] = 1;
  }

  for(i = 1; i <= n; i++)
    if (!used[i]) dfs(i);

  if (flag) printf("YES\n");
  else printf("NO\n");

  return 0;
}