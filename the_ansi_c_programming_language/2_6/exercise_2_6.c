#include <stdio.h>

int set_bits(int x, int p, int n, int y);

int set_bits(int x, int p, int n, int y)
{
  return x = y >> ((p + 1) - n);
}

int main(void)
{
  printf("%b\n", set_bits('a', 3, 4, 'z'));

  return 0;
}