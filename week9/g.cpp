#include <stdio.h>
#include <string.h>
#define MAX 110

int i, j, k, n, to;
int g[MAX][MAX];

int main(void)
{
  memset(g,0,sizeof(g));
  scanf("%d",&n);
  for(i = 1; i <= n; i++)
  {
    scanf("%d",&k);
    for(j = 0; j < k; j++)
    {
      scanf("%d",&to);
      g[i][to] = 1;
    }
  }

  for(i = 1; i <= n; i++)
  {
    for(j = 1; j <= n; j++)
      printf("%d ",g[i][j]);
    printf("\n");
  }

  return 0;
}