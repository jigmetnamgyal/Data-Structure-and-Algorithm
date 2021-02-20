#include <iostream>
typedef long long ll;

ll exp(ll x, ll n){
    if (n == 0) return 1;
    if(n % 2 == 0) return exp(x * x, n/2);

    return x * exp(x, n-1);
}

int main(){
    ll x;

    std::cin >> x;
    std::cout << (x * exp(x-1, x-1)) % (exp(10, 9) + 7) << std::endl;
}