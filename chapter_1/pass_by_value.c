#include <stdio.h>

int power(int base, int n);

int main() {
  for (int i = 0; i <= 10; i++)
    printf("%d\t%d\t%d\n", i, power(2, i), power(-2, i));

  return 0;
}

int power(int base, int n) {
  int power;
  for (power = 1; n > 0; --n)
    power = power * base;

  return power;
}
