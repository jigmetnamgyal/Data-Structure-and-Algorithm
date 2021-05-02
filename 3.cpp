#include <cstdio>

#include <vector>

using namespace std;

 

vector<vector<int> > g;

vector<int> used, mas;

int i, j, n, x, k, cnt;

 

int Repr(int n)

{

  while (n != mas[n]) n = mas[n];

  return n;

}

 

void Union(int x, int y)

{

  int x1 = Repr(x), y1 = Repr(y);

  if (x1 == y1) return;

  mas[x1] = y1;

}

 

int main(void)

{

  scanf("%d", &n);

  g.resize(n + 1);

  mas.resize(n + 1);

  for (i = 1; i <= n; i++)

  {

    scanf("%d", &k);

    for (j = 0; j < k; j++)

    {

      scanf("%d", &x);

      g[i].push_back(x);

    }

  }

 

  for (i = 1; i <= n; i++) mas[i] = i;

  for (i = 1; i <= n; i++)

  {

    for (j = 0; j < g[i].size(); j++)

    {

      int to = g[i][j];

      Union(i, to);

    }

  }

 

  cnt = 0;

  for (i = 1; i <= n; i++)

    if (mas[i] == i) cnt++;

  printf("ans = %d\n", cnt);

  return 0;

}