#include <iostream>
using namespace std;

long gcd(long a, long b){
    return b ? gcd(b, a % b) : a;
}
long long lcm(long long a, long long b){
    return a / gcd(a,b) * b;
}
int main(){
    long long a, b;
    std::cin >> a >> b;
    std::cout << lcm(a,b) << std::endl;
}