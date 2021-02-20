#include <iostream>

long long exp(long long x, long long y, long long m){
    if(y == 0) return 1;
    if(y%2 == 0) return exp((x * x) % m, y/2, m);
    return (x * exp(x,y-1, m)) % m;
}

int main(){
    long long n , m;
    std::cin >> n >> m;
    long long sum = exp(1, n, m) + exp(2, n, m);
    for(int i = 3; i <= 100; i++){
        sum = (sum + (i-1) * exp(i, n, m)) % m; 
    }
    std::cout << sum <<std::endl;
}
