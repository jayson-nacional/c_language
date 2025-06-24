#include <stdio.h>

int main() {
  int c, p; // where c = current char, p = previous char

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (p != ' ' && p != '\t' && p != '\n')
        putchar('\n');
    } else
      putchar(c);

    p = c;
  }

  return 0;
}
