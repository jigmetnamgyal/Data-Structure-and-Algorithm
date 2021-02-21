#include <iostream>
#include <vector>

int gcd(int a, int b){
    return (b) ? gcd(b, a%b) : a;
}

std::vector<int> sumOfFractions(int a1, int deno1, int a2, int deno2){
    int lcm = deno1 * deno2 / gcd(deno1, deno2);
    int sum = (a1 * lcm/deno1)+ (a2 * lcm/deno2);
    int num3 = sum/gcd(sum, lcm); 
    lcm = lcm/gcd(sum,lcm);

    std::vector <int> arr;
    arr.push_back(num3);
    arr.push_back(lcm);

    return arr;
}

int main(){
    int a, b,c,d;
    std::cin >> a >> b >> c >> d;
    std::vector <int> arr;
    arr = sumOfFractions(a,b,c,d);

if(arr[1] == 1){
    std::cout << arr[0] << std::endl;
}else{
    std::cout << arr[0] << " " << arr[1]<<std::endl;
}
    
}