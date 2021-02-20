#include <iostream>
typedef long long ll;
#define MOD 1000000007

ll exp(ll x, ll n, ll m){
    if (n == 0) return 1;
    if(n % 2 == 0) return exp((x * x) % m,n/2,m);
    return (x * exp(x, n-1, m)) % m;
}
int main(){
    ll n;
    std::cin >> n;
    std::cout << ((n * exp(n-1, n-1, MOD)) % MOD) << std::endl;
}