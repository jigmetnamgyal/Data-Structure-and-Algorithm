#include <iostream>

int gcd(int a, int b){
    return (b)? gcd(b,a%b) : a;
}
int moreNumberGcd(int arr[], int n){
    int result = arr[0];
    for(int i = 1; i < n; i++){
        result = gcd(arr[i], result);

        if(result == 1) return 1;
    }
    return result;
}
int main(){
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0;i < n; i++){
        std::cin >> arr[i];
    }
    std::cout << moreNumberGcd(arr, n) << std::endl;
}