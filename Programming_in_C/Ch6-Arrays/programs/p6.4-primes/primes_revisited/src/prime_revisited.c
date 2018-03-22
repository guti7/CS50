// Programming in C, 4th, Kochan
// Program 6.4
// Created by Guti on 3/8/18.

// Program to generate a table of prime numbers
//    A number is prime if it is NOT divisible by any other prime number
//    A nonprime number can be expressed as a multiple of prime factors

// Improvement:
// Test if the given integer is prime by
// determining if it is not evenly divisible by any other previously
// generated prime. (divisible = not prime, not divisible = prime)

// Using trial division: A nonprime integer must have as one of its factors
// an integer that is less than the square root
// of the nonprime integer in question.

#include <stdio.h>
#include <stdbool.h>

#define COUNT 50
int main(void) {
  int p, i, primes[50], primeIndex = 2;
  bool isPrime;
 
  primes[0] = 2;
  primes[1] = 3;

  // Generate primes up to COUNT
  for (p = 5; p <= COUNT; p += 2 ) // First 3 primes = 2, 3, 5, even numbers(>2) are not prime
  {
    isPrime = true;
    
    // Check if current integer `p` is divisible by previous prime (in primes[])
    for (i = 1; isPrime && p / primes[i] >= primes[i]; i++)
    {
      // Evenly divisible by another prime
      if (p % primes[i] == 0)
      {
        isPrime = false;
      }
    }
    
    // Add found prime to primes[]
    if(isPrime)
    {
      primes[primeIndex] = p;
      primeIndex++;
    }
  }
  
  // Report results
  for (i = 0; i < primeIndex; i++)
  {
    printf("%i ", primes[i]);
  }
  
  printf("\n");

  return 0;
}
