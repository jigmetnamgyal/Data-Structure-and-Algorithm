#include <stdio.h>
#include <stdbool.h>
//The first idea that comes to mind is to convert the number into string, and check if the string is a palindrome, but this would require extra non-constant space for creating the string which is not allowed by the problem description.

//Second idea would be reverting the number itself, and then compare the number with original number, if they are the same, then the number is a palindrome. However, if the reversed number is larger than int.MAX, we will hit integer overflow problem.

//Following the thoughts based on the second idea, to avoid the overflow issue of the reverted number, what if we only revert half of the int number? After all, the reverse of the last half of the palindrome should be the same as the first half of the number, if the number is a palindrome.

//reversed last digit should be same as the first half of the original number

//For example, if the input is 1221, if we can revert the last part of the number "1221" from "21" to "12", and compare it with the first half of the number "12", since 12 is the same as 12, we know that the number is a palindrome. 

bool isPalindrome(int n){
    //negative nnumbers cannot be zero, 
    //Also if the last digit of the number is 0, in order to be a palindrome,
    // the first digit of the number also needs to be 0.
    // Only 0 satisfy this property.
    if(n<0 || (n%10==0 && n != 0)){
        return false;
    }

    int revereseNumber = 0;

    //
    while(n > revereseNumber){
        int remainder = n % 10;
        revereseNumber = revereseNumber * 10 + remainder;
        n/=10;
    }
    // When the length is an odd number, we can get rid of the middle digit by revertedNumber/10
    // For example when the input is 12321, at the end of the while loop we get x = 12, revertedNumber = 123,
    // since the middle digit doesn't matter in palidrome(it will always equal to itself), we can simply get rid of it.

    return n == revereseNumber || n == revereseNumber/10;
}
int main(void){

}