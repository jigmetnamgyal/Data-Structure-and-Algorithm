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
            if(!s.empty()){
                cout << s.front() << endl;
                s.pop_front();
            }else{
                cout << "error" << endl;
            }
           
        }else if(str == "pop_back"){
             if(!s.empty()){
                 cout << s.back() << endl;
                s.pop_back();
             }else{
                 cout << "error" << endl;
             }
            
        }else if(str == "front"){
            if(!s.empty()){
                cout << s.front() << endl;
            }else{
                cout << "error" << endl;
            }
        }else if(str=="back"){
             if(!s.empty()){
            cout << s.back()<<endl;
             }else{
                 cout << "error" << endl;
             }
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