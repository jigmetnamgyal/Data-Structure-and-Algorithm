#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack <char> s;
    int n;
    
    cin >> n;
    cin.ignore();
    string str;
    int flag = 0;
    while(n--)
    {
        getline(cin, str);
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '(' || str[i] == '['){
                s.push(str[i]);
            }else if((!s.empty()) && ((str[i] == ')' && s.top() == '(') ||  (str[i] == ']' && s.top() == '['))){
                s.pop();
            }else{
                flag = 1;
                break;
            }
        }
        if((s.empty() && flag == 0) || (str.empty())){
            cout << "Yes" << endl;
        }else{
            while(!(s.empty())) s.pop();
            flag = 0;
            cout << "No" << endl;
        }        
       }
}
















