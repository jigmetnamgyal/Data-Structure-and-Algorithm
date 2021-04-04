#include <iostream>
#include <vector>
using namespace std;
int f(int a, int b)
{
    if (abs(a % 2) != abs(b % 2)) return abs(a % 2) > abs(b % 2);
    if (a % 2 == 0) return a > b;
    if (abs(a % 2) == 1) return a < b;
}

int main(){
    vector<int> arr;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end(),f);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}