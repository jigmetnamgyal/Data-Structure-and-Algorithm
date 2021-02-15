#include <iostream>
long long f(long long x, long long y){
    if(x <= 0 || y <= 0) return 0;
    if(x > y){
        return f(x-2, y-2) + 1;
    }
   
    return f(x-1,y-1) + f(x-2, y-1) + 2;
    
}
int main(){
    std::cout << f(38,49);

}