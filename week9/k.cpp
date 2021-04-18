#include <stdio.h>

int i, j, n, res, val;
int g[101][101];

int main(void)
{
  scanf("%d",&n);
  for(i = 0; i < n; i++)
  for(j = 0; j < n; j++)
    scanf("%d",&g[i][j]);

  for(i = 0; i < n; i++)
  for(j = 0; j < n; j++)
    if (i == j) res = res + g[i][j];


if (res > 0)  printf("YES");
else printf("NO");
 
  return 0;
}