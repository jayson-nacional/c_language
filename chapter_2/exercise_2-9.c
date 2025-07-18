#include <stdio.h>

int bitcount(unsigned x);
int e_bitcount(unsigned x);

int main() {
  // In a two's complement number system, x &= (x - 1)
  // deletes the rightmost 1 bit in x.
  // Explain why. Use this observation to write a faster version of bitcount
  printf("%d\n", bitcount(43));
  printf("%d\n", e_bitcount(43));

  // Explanation
  // Using x &= (x - 1) for counting 1 bit is more efficient
  // as it reduces the number of iteration only to the number of existing 1 bit
  // in x The original bitcount loops to each binary digit of x while comparing
  // if it's 1 or not, therefore inefficient

  return 0;
}

int bitcount(unsigned x) {
  int b;

  for (b = 0; x != 0; x >>= 1)
    if (x & 01)
      b++;

  return b;
}

int e_bitcount(unsigned x) {
  int i;
  for (i = 0; x > 0; i++)
    x &= (x - 1);

  return i;
}
