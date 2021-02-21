#include <iostream>
#include <string>

std::string strFib(int n){
    if(n == 0) return "a";
    if(n == 1) return "b";
    return strFib(n-1) + strFib(n-2);
}

int main(){
    int n;
    std::cin >> n; 
    std::string a = strFib(n);
    std::cout << a << std::endl;
}