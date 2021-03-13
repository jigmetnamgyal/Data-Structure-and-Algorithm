#include <iostream>
int i , n;
int d[1000001];

int main(){
    d[1] = 0;

    for (i = 2; i <= 1000000; i++){
        d[i] = d[i-1];
        if(i % 2 == 0 && d[i/2] < d[i]) d[i] = d[i/2];
        if(i % 3 == 0 && d[i/3] < d[i]) d[i] = d[i/3];
        d[i]++;
    }
    while(std::cin >> n){
        std::cout << d[n] << std::endl;
    }

}