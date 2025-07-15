#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);

int main() {
  printf("%u\n", setbits(5, 4, 3, 16));

  return 0;
}

unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p - n + 1)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
  unsigned a = getbits(x, p, n);
  return y | a;
}
