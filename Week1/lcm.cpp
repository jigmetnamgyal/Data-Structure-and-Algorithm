#include <iostream>
using namespace std;

int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}
long long lcm(long long a, long long b){
    return a / gcd(a,b) * b;
}
int main(){
    int a, b;
    std::cin >> a >> b;
    std::cout << lcm(a,b) << std::endl;
}