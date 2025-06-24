#include <stdio.h>

int power(int base, int n);

int main() {
  for (int i = 0; i < 10; i++) {
    printf("%d %d %d\n", i, power(2, i), power(-2, i));
  }

  return 0;
}

int power(int base, int n) {
  int power = 1;

  for (int i = 0; i <= n; i++) {
    power = power * base;
  }

  return power;
}
