#include <iostream>

void sieve(int a, int b)
{
  int i, j, primes[100] = {1};
  for(i = a; i * i < b; i++)
    if (primes[i])
      for(j = i * i; j < b; j += i) primes[j] = 0;

      for(int i = a; i < b; i++){
          if(primes[i] == 1) 
              std::cout << i << std::endl;
      }
}

int main(){
    int a, b;
    std::cin >> a >> b;
    sieve(a, b);
}