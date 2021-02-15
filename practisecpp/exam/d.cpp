#include <iostream>
using namespace std;

int main(){
    long long a = 9999, b = 22222, flag;
    int count = 0;

    for(int i = a; i <= b; i++){
        if(i == 1 || i == 0) continue;

        flag = 1;

        for(int j = 2; j <= i /2; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }

        if(flag == 1){
            count++;
        }
    }

    cout << count;

}