cmake_minimum_required(VERSION 3.17)
project(DSA)

set(CMAKE_CXX_STANDARD 14)

add_executable(DSA
        practisecpp/another.cpp
        practisecpp/main.cpp
        Week1/digits.c
        Week1/exponentiation.c
        Week1/factorial.c
        Week1/fibonacci2.c
        Week1/fibonacciSequence.c
        Week1/function-10.c
        Week1/gcd.c
        Week1/howmany.c
        Week1/lcm.cpp
        Week1/modularexponentiation.c
        Week1/palindrome.c
        Week1/palindromeEfficient.c
        Week1/recursion-1.c
        Week1/sumofdigits.c practisecpp/memoization.cpp practisecpp/sieveOfEratostheness.cpp)

add_executable(lcm Week1/lcm.cpp)