#include <stdio.h>

int primeInRange(int L, int R)
{
    int i, j, flag;
    int count = 0;
  
    // Traverse each number in the
    // interval with the help of for loop
    for (i = L; i <= R; i++) {
  
        // Skip 0 and 1 as they are
        // niether prime nor composite
        if (i == 1 || i == 0)
            continue;
  
        // flag variable to tell
        // if i is prime or not
        flag = 1;
  
        // Iterate to check if i is prime
        // or not
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
  
        // flag = 1 means i is prime
        // and flag = 0 means i is not prime
        if (flag == 1){
            printf("%d ", i);
            count++;
        }
      
           
    }
      return count;
}
  
// Driver Code
int main()
{
    // Given Range
    int L = 5000;
    int R = 10000;
  
    // Function Call
    int c = primeInRange(L, R);
    printf("\nthe number is : %d ", c);
  
    return 0;
}