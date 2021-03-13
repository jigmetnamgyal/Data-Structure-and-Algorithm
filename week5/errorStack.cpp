#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    freopen("my.txt", "r", stdin);

    stack <int> s;
    string str;
    int value;
    while(1){
        cin >> str;
        if(str == "push"){
            cin >> value;
            s.push(value);
            cout << "ok" << endl;
        }else if(str == "pop"){
            if(!s.empty()){
                cout << s.top() << endl;
                s.pop();
            }else{
                cout << "error" << endl;
            }
        }else if(str == "back"){
            if(!s.empty()){
                cout << s.top() << endl;
            }else{
                cout << "error" << endl;
            }
            
        }else if(str == "size"){
            cout << s.size() << endl;
        }else if(str == "clear"){
            while(!(s.empty())) s.pop();
            cout << "ok" <<endl;
        }else{
            cout << "bye" << endl;
            break;
        }
    }
}