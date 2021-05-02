#include <cstdio>
#include <vector>
using namespace std;

int n, m, i, j, a, b, cnt;
vector<vector<int> > g;
vector<int> used;

void dfs(int v)
{
  used[v] = 1;
  for(int i = 0; i < g[v].size(); i++)
  {
    int to = g[v][i];
    if (!used[to]) dfs(to);
  }
}

int main(void)
{
  //freopen("776.in","r",stdin);
  scanf("%d %d",&n,&m);
  g.resize(n+1);

  for (i = 1; i <= m; i++)
  {
    scanf("%d %d",&a,&b);
    g[a].push_back(b);
    g[b].push_back(a);
  }

  used.resize(n+1);
  cnt = 0;
  for(i = 1; i <= n; i++)
    if (used[i] == 0)
    {
      dfs(i);
      cnt++;
    }

  printf("%d\n",cnt-1);
  return 0;
}