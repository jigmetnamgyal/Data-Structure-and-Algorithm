#include <iostream>
#include <queue>
using namespace std;

int main(){
    freopen("my.txt", "r", stdin);
    int n,a,b;
    deque<int> d[150001];
    string str;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> str;
        if(str == "pushfront"){
            cin >> a >> b;
            d[a].push_front(b);
        }else if(str == "pushback"){
            cin >> a >> b;
            d[a].push_back(b);
        }else if(str == "popfront"){
            cin >> a;
            cout << d[a].front() << endl;  
            d[a].pop_front();
        }else if(str == "popback"){
            cin >> a;
            cout << d[a].back() << endl;  
            d[a].pop_back();
        }
    }
}