#include <iostream>

void sieve(long long a, long long b)
{
  long long i, j, primes[100] = {1};
  for(i = a; i * i < b; i++)
    if (primes[i])
      for(j = i * i; j < b; j += i) primes[j] = 0;

      for(long long i = a; i < b; i++){
          if(primes[i] == 1) 
              std::cout << i << std::endl;
      }
}

int main(){
    long long a, b;
    std::cin >> a >> b;
    sieve(a, b);
}