#include <stdio.h>

unsigned rightrot(int x, int n);

int main() {
  // Write a function rightrot(x, n) that returns integer x
  // rotated to the right by n positions

  printf("%u\n", rightrot(35, 3));

  return 0;
}

unsigned rightrot(int x, int n) {
  int bit_mask_position = 0;
  unsigned original_x = x;
  while ((x = x >> 1) != 0) {
    bit_mask_position++;
  }

  unsigned first_mask = ~(~0 << (bit_mask_position + 1));
  unsigned second_mask =
      (original_x << (bit_mask_position + 1 - n)) & first_mask;

  return (original_x >> 3) | second_mask;
}
