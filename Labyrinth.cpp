#include <iostream>
#include <string>
using namespace std;
#define MAX 101
string grid[MAX];
int area= 0;
int height, width;

void dfs(int x, int y){
    if(x<0||x>=height || y < 0 || y >= width)
        return;
    
    if(grid[x][y] == '*') return;

    grid[x] = grid[x].replace(y, 1, "*");
    area++;

    dfs(x-1, y);
    dfs(x, y-1);
    dfs(x+1, y);
    dfs(x, y+1);
}
int main(){
    int x, y;
    cin >> height;
    for(int i = 0; i < height; i++){
        cin >> grid[i];
    }

    cin >> x >> y;
    dfs(x-1, y-1);
    cout << area <<endl;

}