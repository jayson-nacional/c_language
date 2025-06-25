#include <stdio.h>

float convert_to_celsius(float fahr);
float convert_to_fahr(float celsius);

int main() {
  // Printing Fahrenheit to Celsius
  int lower = 0;
  int upper = 300;
  int step = 20;

  printf("Fahr\tCelsius\n");
  float fahr = lower;
  while (fahr <= upper) {
    printf("%6.0f\t %6.1f\n", fahr, convert_to_celsius(fahr));
    fahr = fahr + step;
  }

  // Printing Celsius to Fahrenheit
  upper = 100;
  step = 10;

  printf("Celsius\tFahr\n");
  float celsius = lower;
  while (celsius <= upper) {
    printf("%6.0f\t%6.1f\n", celsius, convert_to_fahr(celsius));
    celsius = celsius + step;
  }

  return 0;
}

float convert_to_celsius(float fahr) {
  float celcius = (5.0 / 9.0) * (fahr - 32.0);
  return celcius;
}

float convert_to_fahr(float celsius) {
  float fahr = (9.0 / 5.0 * celsius) + 32.0;
  return fahr;
}
