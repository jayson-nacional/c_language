#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main() {
  // printf("%u\n", getbits(8, 4, 3));
  // printf("%u\n", 8 >> (4 + 1 - 3));
  // 8 >> 2
  // 1000
  // 10 = 2

  // 1 << 3
  // 1000 = 8 ~ = 0111

  // 0010
  // 0111
  // 0010
  printf("%u\n", getbits(53, 4, 3));

  // 32 16 8 4 2 0
  // 1 1 0 1 0 1
  // 1 1 0 1
  // ---
  // 1 1 1 1
  // 1 1 1 1 0 0 0
  // 0 0 0 0 1 1 1
  //
  // 0 0 0 0 1 1 1
  // 0 0 0 1 1 0 1
  // 1 0 1

  return 0;
}

unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p + 1 - n)) & ~(~0 << n);
}
