#include <stdio.h>

int main() {
  int c, p; // where c = current char, p = previous char

  while ((c = getchar()) != EOF) {
    if (c == ' ' && p == ' ')
      ; // skip
    else
      putchar(c);

    p = c;
  }

  return 0;
}
