#include  <stdio.h>

int main(void)
{
  int n, two_power_n;

  printf ("TABLE OF POWERS OF TWO\n\n");
  printf (" n     2 to the n\n");
  printf ("---    ----------\n");

  two_power_n = 1;
  for (n = 0; n <= 10; n++)
  {
    printf ("%2i      %5i\n", n, two_power_n);
    two_power_n *= 2;
  }

  return 0;

}
