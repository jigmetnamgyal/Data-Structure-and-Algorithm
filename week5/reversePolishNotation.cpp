#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    stack <int> s;
    string str;
    getline(cin, str);
    string buff;
    int first, second,res;
    vector <string> arr;
    stringstream ss(str);
    while(getline(ss, buff, ' ')){
        arr.push_back(buff);
    }
       
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == "*"){
            first = s.top();
            s.pop();
            second = s.top();
            s.pop();
            res = first * second;
            s.push(res);
        }else if(arr[i] == "-"){
            first = s.top();
            s.pop();
            second = s.top();
            s.pop();
            res = second - first;
            s.push(res);
        }else if(arr[i] == "/"){
            first = s.top();
            s.pop();
            second = s.top();
            s.pop();
            res = second / first;
            s.push(res);
        }else if(arr[i] == "+"){
            first = s.top();
            s.pop();
            second = s.top();
            s.pop();
            res = first + second;
            s.push(res);
        }else{
            int n = 0;
            stringstream ss1(arr[i]);
            ss1 >> n;
            s.push(n);
        }
    }

    cout << s.top() << endl;

}

 