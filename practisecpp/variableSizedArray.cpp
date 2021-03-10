#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, q, k, row, col;
    vector<vector<int> > arr;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> k;
        vector <int> temp;
        for(int j = 0; j< k; j++ ){
            int a;
            cin >> a;
            temp.push_back(a);
        }
        arr.push_back(temp);
    }
    int res [q];
    for(int i = 0; i < q; i++){
        cin >> row >> col;
        res[i] = arr[row][col]; 
    }
    for(int i = 0; i < q; i++){
        cout << res[i] << endl;
    }
}