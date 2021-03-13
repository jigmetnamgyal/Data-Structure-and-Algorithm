#include <stack>
#include <iostream>
using namespace std;

int main(){
    freopen("my.txt", "r", stdin);

    stack <int> s;
    int n;
    cin >> n;
    while(n--){
        int options, value;
        cin >> options;
        if(options == 1){
            cin >> value;
            s.push(value);
        }else{
            cout << s.top() << endl;
            s.pop();
        }
    }

}