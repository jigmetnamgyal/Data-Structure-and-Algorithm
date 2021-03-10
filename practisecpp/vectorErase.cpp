#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q, one, two;
    cin >> n;
    vector <int> arr;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cin >> q;
    cin >> one >> two;
    
    arr.erase(arr.begin() + (q - 1));
    arr.erase(arr.begin() + (one - 1), arr.begin() + (two - 1));
    cout << arr.size() << endl;
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
