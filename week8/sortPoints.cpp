#include <stdio.h>
#include <string.h> 
#define MAX 32
int m[MAX];
int n, v, res;

int main(){
    scanf("%d",&n);
    memset(m,0,sizeof(m));
    for(int i = 0; i < n; i++)
    {
         scanf("%d",&v);
        m[v]++;
    }
    res = 0;
    for(int i = 0; i < MAX; i++)
        if(m[i] > 0) res++;
    printf("%d ",res);


}