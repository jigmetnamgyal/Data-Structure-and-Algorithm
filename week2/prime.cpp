#include <iostream>
#include <cmath>

bool isPrime(int n){
    for (int i = 2; i <=sqrt(n); i++){
          if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    std::cin >> n;
    if(isPrime(n)){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" <<std::endl;
    }
}