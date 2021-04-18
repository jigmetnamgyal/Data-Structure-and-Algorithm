#include <stdio.h>
#include <vector>
using namespace std;
#define MAX 101

int degree[MAX];

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    
    int a,b;
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        degree[a]++;
        degree[b]++;
    }
    
    bool flag=true;
    for(int i=1;i<=n;i++){
        if(degree[i]!=degree[i+1]){
            flag=false;
            break;
        }
    }
    
    if(flag==true) printf("YES");
    else printf("NO");
}