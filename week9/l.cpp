#include <stdio.h>

int i, j, n, flag,a,m,b;
int g[101][101];

int main(void)
{
  scanf("%d %d", &n, &m);

  flag = 0;
for (i = 0; i < m; i++)
{
 scanf("%d %d", &a, &b);
 g[a][b]++;
 if (g[a][b] > 1) flag = 1;
}

if (flag)
 puts("YES");
else
 puts("NO");
    
  return 0;
}