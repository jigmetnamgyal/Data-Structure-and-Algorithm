#include <iostream>
#include <vector>
using namespace std;

int persistentNumber(long long num){
    vector<int> arr;
    arr.push_back(num);
    long long product = 1;

    while(num > 9){
        while(num > 0){
            int digits = num % 10;
            product *= digits;
            num /= 10;
        }
        num = product;
        product = 1;
        arr.push_back(num);
    }
   return arr.size() - 1;

}
int main(){
    long long n;
    vector <long long> arr;
    while(cin >> n)
        int index = persistentNumber(n);
        arr.push_back(index);
    }

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }


}