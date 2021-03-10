#include <iostream>
#include <string>
using namespace std;
struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};
int main(){
    Student std1;
    cin >> std1.age >>std1.first_name >> std1.last_name >> std1.standard;
    cout << std1.age << endl; 
    cout << std1.first_name << endl; 
    cout << std1.last_name << endl; 
    cout << std1.standard << endl; 
}