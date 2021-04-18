#include <stdio.h>

int i, j, n, res, val;
int g[101][101], m[101];

int main(void)
{
  scanf("%d",&n);
  for(i = 0; i < n; i++)
  for(j = 0; j < n; j++)
    scanf("%d",&g[i][j]);
    
 
  for(i = 0; i < n; i++)
  for(j = 0; j < n; j++)
    if (g[i][j] == 1) printf ("%d %d\n",i+1,j+1);


  return 0;
}