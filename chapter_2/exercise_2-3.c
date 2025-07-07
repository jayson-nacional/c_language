#include <stdio.h>

int hex_to_decimal(char s);
int power(int b, int n);

int main() {
  // ALGORITHM
  // store the numbers to a int array
  int c;
  int len = 0;
  int digits[100];
  int result = 0;

  while ((c = getchar()) != '\n') {
    if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') ||
        (c >= 'A' && c <= 'F')) {
      digits[len++] = hex_to_decimal(c);
    }
  }

  int power_index = 0;
  for (--len; len >= 0; len--) {
    result = result + digits[len] * power(16, power_index++);
  }

  printf("Decimal equivalent: %d\n", result);

  return 0;
}

int hex_to_decimal(char s) {
  if (s >= '0' && s <= '9')
    return s - '0';
  else if (s >= 'a' && s <= 'f')
    return s - 'a' + 10;
  else if (s >= 'A' && s <= 'F')
    return s - 'A' + 10;

  return -1;
}

int power(int b, int n) {
  int result = 1;
  for (int i = 0; i < n; i++)
    result = result * b;

  return result;
}
