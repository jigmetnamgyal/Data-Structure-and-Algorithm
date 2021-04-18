#include <stdio.h>

int i, j, n, flag;
int m[101][101];

int main(void)
{
  scanf("%d",&n);
  for(i = 0; i < n; i++)
  for(j = 0; j < n; j++)
    scanf("%d",&m[i][j]);

  flag = 1;
  for(i = 0; i < n; i++)
  for(j = 0; j < n; j++){
      if (m[i][j] != m[j][i]) flag = 0;
      if ((j == i) && (m[i][j] == 1)) flag = 0;
      
  }
    


  if (flag == 1) printf("YES");
  else printf ("NO");
  return 0;
}