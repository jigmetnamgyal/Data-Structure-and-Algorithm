#include <iostream>

long long modExponentiation(long long x, long long n, long long m){
    if (n == 0) return 1;
    if(n % 2 == 0) return modExponentiation((x * x) % m, n/2, m);

    return (x * modExponentiation(x, n-1, m)) % m;
}

int main(){
    long long x, n, m;
    std::cin >> x >> n >> m;
    std::cout << modExponentiation(x,n,m);
}