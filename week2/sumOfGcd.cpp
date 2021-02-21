#include <iostream>
#include <vector>
typedef long long ll;

ll gcd(ll a, ll b){
    return b ? gcd(b,a%b):a;
}
int main(){
    std::vector <ll> arr;
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        ll sum = 0;
        int m;
        std::cin >> m;
        for(int j = 0; j < m; j++){
            int a;
            std::cin >>a;
            arr.push_back(a);
        }

        // for(int l = 0; l < m; l++){
        //     std::cout << arr[l];
        // }
        for(int k = 0; k < (m - 1); k++){
            for(int p = k + 1; p < (m); p++){
                sum += gcd(arr[k],arr[p]);
            }
        }
        std::cout << sum <<std::endl;
        sum = 0;
        arr.clear();
    }

}