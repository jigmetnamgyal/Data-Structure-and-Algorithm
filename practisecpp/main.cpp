#include <iostream>

void swap(int &a, int &b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}
int main() {
    int a, b;
    std::cin >> a >> b;
    swap(a,b);
    std::cout << "a value is: " << a << " The value of b is: " << b <<std::endl;
    return 0;
}
