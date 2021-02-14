#include <iostream>
#include <vector>
using namespace std;

int minimalSumOfDigits(vector <int> arr){
    vector <int> store;
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        int sum = 0;
        while(arr[i] > 0){
            int digits = arr[i] % 10;
            sum += digits;
            arr[i] /= 10;
        }
        store.push_back(sum);
    }
    int min = store[0];
    for(int i = 0; i < store.size(); i++){
        if(min > store[i]){
            min = store[i];
        }
    }
    for(int i = 0; i < store.size(); i++){
        if(store[i] == min){
            count++;
        }
    }

    return count;
}
int main(){
    vector <int> arr;
    int n, m;
    cin >> n >> m;
    for(int i = n; i <= m; i++){
        arr.push_back(i);
    }
    int min = minimalSumOfDigits(arr);
    cout << min << endl;
}