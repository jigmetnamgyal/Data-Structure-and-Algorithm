#include <iostream>
#include <vector>
using namespace std;
vector<int> sequenceArr(int n){
    vector <int> arr;
    arr.push_back(n);
    while(n > 1){
        if(n % 2 == 0){
            n = n/2;
            arr.push_back(n);
        }else{
            n = n * 3 + 1;
            arr.push_back(n);
        }
    }
    return arr;
}

int maxOfSequence(vector <int> arr){
    int max = arr[0];
    for(int i  = 0; i < arr.size(); i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int t,n, i = 0, count;
    vector<int> store;
    cin >> t;

    while(i < t){
        cin >>count >> n;
        vector<int> arr = sequenceArr(n);
        store.push_back(maxOfSequence(arr));
        i++;
    }

    for(int i = 0; i < store.size(); i++){
        int a = i + 1;
        cout << a << " " <<  store[i] << endl;
    }

}