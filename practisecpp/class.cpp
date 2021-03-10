#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Student{
    private:
        int age;
        string first_name, last_name;
    public:
        Student(){
            age = 0;
            first_name.clear();
            last_name.clear();
        }
        void set_age(int new_age){
            age = new_age;
        }
        void set_first_name(string fn){
            first_name = fn;
        }
        void set_last_name(string ln){
            last_name = ln;
        }

        int get_age(){
            return age;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }
        string to_string(){
            stringstream ss;
            char c = ',';
            ss << age << c << first_name << c << last_name;

            return ss.str();
        }

};
int main(){
    Student t;

    int age;
    string first_name, last_name;

    cin >> age >> first_name >> last_name;
    t.set_age(age);
    t.set_first_name(first_name);
    t.set_last_name(last_name);

    cout << t.get_age() << t.get_first_name() << t.get_last_name() << endl;
    
}