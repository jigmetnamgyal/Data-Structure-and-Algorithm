#include <iostream>
#include <vector>
using namespace std;
int max(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}
int robbedMoney(vector<int> &nums){
    int size = nums.size();
    if(size == 0) return 0;
    if(size == 1) return nums[0];
    if(size == 2) return max(nums[0], nums[1]);

    int dp[size];
    memset(dp, 0, sizeof(dp));
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for(int i = 2; i < size; i++){
       dp[i] = max(dp[i - 2] + nums[i],dp[i-1]);
    //[1,3]  //[1,3,4,5]
    }
    return dp[size - 1];

}
int main(){
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i <n;i++){
        int a;
        cin >> a;
        arr.push_back(a); 
    }
    int robbedMoneyMax = robbedMoney(arr);
    cout << robbedMoneyMax << endl;
}