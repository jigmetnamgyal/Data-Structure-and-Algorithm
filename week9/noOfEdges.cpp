#include <cstdio>
#include <vector>
using namespace std;
int g[101][101];
int main(){
    int n, num = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        int val;
        scanf("%d", &val);
        if(val) g[i][j] = val;
    }
    }

    for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        if(g[i][j] == 1){
            num++;
        }
    }
    }
    printf("%d", num);
}