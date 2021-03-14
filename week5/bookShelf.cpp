#include <iostream>
#include <queue>
using namespace std;

int main(){
    freopen("my.txt", "r", stdin);

    deque<int> d;
    int n, opt;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> opt;
        int val;
        if(opt == 1){
            cin >> val;
            d.push_front(val);
        }else if(opt == 2){
            cin >> val;
            d.push_back(val);
        }else if (opt == 3){
            cout << d.front() << endl;
            d.pop_front();
        }else{
            cout << d.back() << endl;
            d.pop_back();
        }
    }
}