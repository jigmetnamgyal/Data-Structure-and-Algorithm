#include <iostream>
#include <cstring>
typedef long long ll;
#define MOD 12345
ll arr[96];
ll threeOnes(ll n){
    if(n == 1) return 2 % MOD;
    if(n == 2) return 4 % MOD;
    if(n == 3) return 7 % MOD;

    if(arr[n] != -1) return arr[n] % MOD;

    return arr[n] = (threeOnes(n - 1) + threeOnes(n - 2) + threeOnes(n - 3)) % MOD;
}
int main(){
    ll n;
    std::cin >> n;
    memset(arr,-1,sizeof(arr));
    std::cout << (threeOnes(n) % 12345) << std::endl;
    
}