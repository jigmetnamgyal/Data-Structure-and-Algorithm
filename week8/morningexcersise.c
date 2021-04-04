#include <stdio.h>
#include <string.h>

#define MAX 1000001
int m[MAX];
int i,j,n,res;

int main()
{
  
  memset(m,0,sizeof(m));
  while(scanf("%d",&n)==1)
  {
   
    m[n]++;
  }
  res=0;
  for(i = 0; i < MAX; i++)
     res=res+m[i]/2;
   printf("%d ",res);
    printf("\n");

    return 0;
}