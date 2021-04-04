#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, a;
    cin >> n;
    vector<int> arr;

   while(cin >> a){
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}