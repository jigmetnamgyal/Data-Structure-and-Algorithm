#include <iostream>
using namespace std;

int main(){
    freopen("my.txt", "r", stdin);
    
    int maj, stack, n;
    int m[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m[i];
    }
    
    maj = 0;
    stack = 0;
    for(int i = 0; i < n; i++){
        if(stack == 0) {
            maj = m[i];
            stack++;
        }else if(m[i] == maj){
            stack++;
        }else{
            stack--;
        }
    }

    stack = 0;
    for(int i = 0; i < n; i++){
        if(m[i] == maj) stack++;
    }
    int res;

    if(2 * stack > n) res = maj; else res = -1;

    cout << res << endl;

    
}