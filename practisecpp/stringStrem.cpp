#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;
vector<int> parseInt(string str){
  stringstream ss(str);
  char ch;
  int temp;
  vector<int> result;

  while(ss >> temp){
    result.push_back(temp);
    ss >> ch;
  }
  return result;
  
}
int main(){

  string s;
  cin >> s;
  vector<int> arr = parseInt(s);
 
  for(int i = 0; i < arr.size(); ++i){
    cout << arr[i] << endl;
  }
}