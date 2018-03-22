#include <stdio.h>

#define SIZE 10

int main(void)
{
  int numbers[SIZE] = { 1, 0 };
  int i, j;
  
  for (j = 0; j < SIZE; j++)
  {
    for (i = 0; i < j; i++)
    {
      numbers[j] += numbers[i];
    }
  }
  
  // Print results
  for (j = 0; j < SIZE; j++)
  {
    printf("%i ", numbers[j]);
  }
  
  printf("\n");
  
  return 0;
}