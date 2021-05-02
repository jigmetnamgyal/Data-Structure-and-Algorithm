#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
#define MAX 101

int g[MAX][MAX];
int used[MAX];

int n,m; 
void dfs(int v){
    printf("%d ",v);
    used[v]=1;
    
    for(int i=1;i<=n;i++){
        if( (g[v][i]==1) && (used[i]==0) ) dfs(i);
    }
}

int main(){
    scanf("%d %d",&n,&m);
    memset(g, 0, sizeof(g));
    memset(used, 0, sizeof(used));
    
    int a,b;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        g[a][b]=g[b][a]=1;
    }
    
    int v;
    scanf("%d",&v);
    dfs(v);
    printf("\n");
    return 0;
}