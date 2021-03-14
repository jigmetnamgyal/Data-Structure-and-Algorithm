#include <iostream>
#include<queue>
using namespace std;

int main(){
    freopen("my.txt", "r", stdin);

    deque<int> s;
    string str;
     int value;
    while(1){
        cin >> str;
        if(str == "push_front"){
            cin >> value;
            s.push_front(value);
            cout << "ok" << endl;
        }else if(str == "push_back"){
            cin >> value;
            s.push_back(value);
            cout << "ok" << endl;
        }
        else if(str == "pop_front"){
            cout << s.front() << endl;
            s.pop_front();
        }else if(str == "pop_back"){
            cout << s.back() << endl;
            s.pop_back();
        }else if(str == "front"){
            cout << s.front() << endl;
        }else if(str=="back"){
            cout << s.back()<<endl;
        }
        else if(str == "size"){
            cout << s.size() << endl;
        }else if(str == "clear"){
            while(!(s.empty())) s.pop_back();
            cout << "ok" <<endl;
        }else{
            cout << "bye" << endl;
            break;
        }
    }
}