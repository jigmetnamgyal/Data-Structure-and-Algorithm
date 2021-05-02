#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
#define MAX 101

int g[MAX][MAX];
int used[MAX];

int n,m; // vertices and edges
void dfs(int v){
    
    used[v]=1;
    
    for(int i=1;i<=n;i++){
        if( (g[v][i]==1) && (used[i]==0) ){
            printf("%d %d\n",v,i);
            dfs(i);
        }// end if
    }// end for
}// end

int main(){
    scanf("%d %d",&n,&m);
    memset(g, 0, sizeof(g));
    memset(used, 0, sizeof(used));
    
    int a,b;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        g[a][b]=g[b][a]=1;
    }// end for
    
    dfs(1);
    return 0;
}// end main