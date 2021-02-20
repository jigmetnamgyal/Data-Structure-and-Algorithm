#include <iostream>

long long exp(long long x, long long y){
    if(y == 0) return 1;
    if(y%2 == 0) return exp(x * x, y/2);
    return x * exp(x,y-1);
}

long long sumOfPowers(long long n, long long m){
    long long sum = exp(1, n) % m + exp(2, n) % m;
    for(int i = 3; i <= 100; i++){
        sum += ((i-1) * exp(i, n)); 
    }
    return sum % m;
}
int main(){
    long long n , m;
    std::cin >> n >> m;
    long long res = sumOfPowers(n, m);
    std::cout << res << std::endl;
}
