#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x){
    int originalNumber = x;
    unsigned int rev = 0;
    int remainder;

    while(x != 0){
        remainder = x % 10;
        rev = rev * 10 + remainder;
        x/=10;
    }

    if (originalNumber == rev && originalNumber >= 0){
        return true;
    }else{
        return false;
    }


}
int main(void){
    int x;
    scanf("%d",&x);
    printf("%d", isPalindrome(x));
}