#include <stdio.h>
#include <string.h>
#define MAX 102

int n, i, j, res,m, t= 1,s;
int g[MAX][MAX], used[MAX],d[MAX], f[MAX],a,b;

void dfs(int v)
{
 d[v] = t++;
 used[v] = 1;
 for (int i = 1; i <= n; i++)
 if ((g[v][i] == 1) && (used[i] == 0)) dfs(i);
 f[v] = t++;
}

int main(void)
{
  //freopen("2269.in","r",stdin);
  scanf("%d %d", &n,&m);

  for(i = 1; i <= m; i++)
  {
    scanf("%d %d", &a, &b);
    g[a][b] = g[b][a] = 1;
  }
scanf("%d ", &s);
  dfs(s);

for(i = 1; i <= n; i++)
  {
   printf ("%d %d\n",d[i],f[i]);
  }
  return 0;
}