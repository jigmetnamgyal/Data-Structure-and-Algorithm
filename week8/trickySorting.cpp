#include <cstdio>
#include <algorithm>
using namespace std;

int i, n, m[102];

int f(int a, int b)
{
  if (a % 10 == b % 10) return a < b;
  else return a % 10 < b % 10;
}

int main(void)
{
  scanf("%d",&n);
  for(i = 0; i < n; i++)
    scanf("%d",&m[i]);
  sort(m,m+n,f);
  for(i = 0; i < n; i++)
    printf("%d ",m[i]);
  return 0;
}