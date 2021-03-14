#include <iostream>
#include <string>
using namespace std;

int main(){
    int open = 0, flag = 0;
    string str;

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '(') open++;
        else open--;
        if(open < 0){
            flag = 1;
            break;
        }
    }
    if((open == 0 && flag == 0)){
        cout << "YES" << endl;
    }else{
        cout << "NO" <<endl;
    }

}