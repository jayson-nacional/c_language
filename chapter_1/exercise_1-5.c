#include <stdio.h>

int main() {
  printf("Fahr\tCelsius\n");
  for (float fahr = 300; fahr >= 0; fahr = fahr - 20) {
    printf("%4.0f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }

  return 0;
}
