#include <iostream>
typedef long long ll;

ll exp(ll x, ll n){
    if(n == 0) return 1;
    if(n % 2 == 0) return exp(x * x,n/2);
    return x * exp(x, n-1);
}
ll sumOfPowersTwo(ll n, ll m){
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        sum += exp(i,i) % m;
    }
    return sum;
}
int main(){
    ll n, m;
    std::cin >> n >> m;
    std::cout << sumOfPowersTwo(n,m) << std::endl;
}