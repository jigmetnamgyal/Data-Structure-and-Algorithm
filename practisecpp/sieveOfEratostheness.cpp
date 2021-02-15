#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//Finding prime number using trial and division method
//bool isPrime(int n){
//    for(int i = 2; i <= sqrt(n); i++){
//        if (n % i == 0) return false;
//    }
//    return true;
//
//}

//finding prime number using sieve of Eratostheness. _ we list a number from 2 to n (and initially say all of them are prime)

void sieve(int n){
    int prime[100] = {0};
    for(int i = 2; i <= n; i++){
        if(prime[i] == 0){
            for(int j = i*i; j <=n; j+=i){
                prime[j] = 1;
            }
        }
    }
    for(int i = 2; i <=n; i++){
        if(prime[i]==0){
            cout << i << endl;
        }
    }
    
}
int main(){
    sieve(10);
}

    