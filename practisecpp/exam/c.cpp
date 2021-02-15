#include <iostream>
using namespace std;
long long f(long long n){
    if(n==1) return 1;
    if(n==2) return 2;
    return f(n-1) + f(n-2) + 1;
}
int main(){
    cout << f(43);
}