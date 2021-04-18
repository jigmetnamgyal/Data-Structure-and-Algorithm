#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int> > g;
    int n, i, j, val;
    scanf("%d", &n);
    g.resize(n + 1);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &val);
            if (val == 1) g[i].push_back(j);
        }
    }
        
    for (i = n; i >= 1; i++)
    {
        for (j = 0; j< n-1; j++)
            printf("%d ", g[i][j]);
        printf("\n");
    }
}