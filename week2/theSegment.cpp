#include <iostream>
#include <cmath>
typedef long long ll;

ll gcd(ll a, ll b){
    return (b) ? gcd(b, a%b) : (a);
}
int noOfSegmentPoints(ll x, ll y){
    return (1 + gcd(x,y));
}
int main(){
    ll x1, x2, y1, y2,x , y;
    std::cin >> x1 >> y1 >> x2 >> y2;
    x = abs(x2 - x1);
    y = abs(y2 - y1);
    int noOfPoints = noOfSegmentPoints(x,y);
    std::cout << noOfPoints << std::endl;
}