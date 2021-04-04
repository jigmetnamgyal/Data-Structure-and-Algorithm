#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s;

int main(void)
{
  cin >> s;
  sort(s.begin(),s.end(),less<int>());
  cout << s << "\n";

  sort(s.begin(),s.end(),greater<int>());
  cout << s << "\n";
  return 0;
}
