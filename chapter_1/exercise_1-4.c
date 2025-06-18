#include <stdio.h>

int main() {
  float celsius, fahr;
  float lower, upper, step;

  lower = 0;
  upper = 100;
  step = 8;

  printf("Celsius\tFahr\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * 9.0 / 5.0 + 32.0;
    printf("%7.0f\t%3.1f\n", celsius, fahr);

    celsius = celsius + step;
  }

  return 0;
}
