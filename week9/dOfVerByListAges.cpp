#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int deg[101] = {0};
    int n, i, j, m, a, b;
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        deg[a]++; 
        deg[b]++;
    }

    for (i = 1; i <= n; i++)
        printf("%d ", deg[i]);

}