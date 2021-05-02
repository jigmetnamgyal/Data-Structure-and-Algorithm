#define MAX 101
#include <stdio.h>
#include <string.h>
using namespace std;
int i, j, n, c, res, time,a , b;
int m[MAX][MAX], used[MAX], d[MAX], f[MAX];
void dfs(int v)
{
 used[v] = 1;
 d[v] = time++;
 for (int i = 1; i <= n; i++)
 if (m[v][i] && !used[i]) dfs(i);
used[v] = 2;
f[v] = time++;
}
void dfs1(int v)
{
 used[v] = 1;
printf ("Vertex: %d, Gray %d, Black %d\n", v, d[v], f[v]);
 for (int i = 1; i <= n; i++)
 if ((m[v][i]) && (!used[i])) dfs1(i);
}
int main()
{
    memset(m,0,sizeof(m)); memset(used,0,sizeof(used));
 scanf ("%d", &n); 
while (scanf ("%d %d", &a, &b) == 2)
m[b][a] = m[a][b] = 1;
time = 1;
for (i = 1; i <= n; i++)
if (!used[i]) dfs(i);
memset(used,0,sizeof(used));
for (i = 1; i <= n; i++)
if (!used[i]) dfs1(i);
    return 0;
}