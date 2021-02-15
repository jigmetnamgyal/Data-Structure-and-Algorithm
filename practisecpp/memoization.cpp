#include <iostream>
#include <cstring>
using namespace std;

int fibStore[46];

int fib(int n){
    if(n <= 1) return n;
    if(fibStore[n] != -1) return fibStore[n];
    
    return fibStore[n] =  fib(n-1) + fib(n-2);
}

int main(){
   memset(fibStore, -1, sizeof(fibStore));
    cout << fib(44) << endl;
}