#include <iostream>
#include <string>
using namespace std;
string fibString(int n){
    if(n == 0) return "a";
    if(n == 1) return "b";
    return fibString(n-1) + fibString(n - 2);
}

int main(){
    int n;
    cin >> n;
    cout << fibString(n);
}