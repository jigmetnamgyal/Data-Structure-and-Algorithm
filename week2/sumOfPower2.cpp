#include <iostream>
typedef long long ll;

ll exp(ll x, ll n, ll m){
    if(n == 0) return 1;
    if(n % 2 == 0) return exp((x * x) % m,n/2, m);
    return (x * exp(x, n-1, m)) % m;
}

int main(){
    ll n, m, sum = 0;
    std::cin >> n >> m;
    for(int i = 1; i <= n; i++){
        sum = ((sum + exp(i,i, m)) % m);
    }
    std::cout << sum << std::endl;
}