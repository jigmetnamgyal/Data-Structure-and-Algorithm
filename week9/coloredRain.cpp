#include <cstdio>
#include <vector>
using namespace std;
int g[102][102], color[102];
int main(){
    int n, num = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        scanf("%d", &g[i][j]);
    }
    }
    for(int i = 1; i <= n; i++){
        scanf("%d", &color[i]);
    }
    for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        if(g[i][j] == 1){
            if(color[i] != color[j]) num++;
        }
    }
    }
    printf("%d", num/2);
}