#include <iostream>
#include <string>
using namespace std;
void swap(char &a, char &b){
    char temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    string a, b;
    cin >> a >> b;
    cout << a.size()<<" "<<b.size() << endl;
    cout << a + b << endl;
    swap(a[0],b[0]);
    cout << a << " " << b << endl;


}