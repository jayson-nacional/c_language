#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main() {
  printf("Testing program...\n");
  // Write a function invert (x, p, n) that returns x
  // with the n bits that begin at position p inverted (i.e., 1 changed to 0 and
  // vice versa), leaving others unchanged
  //
  // i.e. invert(22, 4, 3)
  // 1 0 1 1 0
  // 0 1 0 1 0
  // answer is 12

  // thought process
  // create invert of 0 ~0 => 1 1 1 1 1 1 1 1 1
  // 1 1 1 1 1 0 0 0 0
  // 0 0 0 1 1 1 0 0
  printf("%u\n", invert(22, 4, 3));

  return 0;
}

unsigned invert(unsigned x, int p, int n) {
  unsigned mask = ~(~0 << (p + 1)) ^ ~(~0 << (p - n + 1));
  return x ^ mask;
}
