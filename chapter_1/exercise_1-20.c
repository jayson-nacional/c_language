#include <stdio.h>

#define TAB_STOP 4

int main() {
  int len = 0;

  int c;
  while ((c = getchar()) != EOF) {
    ++len;

    if (c == '\t') {
      int no_of_spaces = TAB_STOP - ((len - 1) % TAB_STOP);
      for (; no_of_spaces > 0; no_of_spaces--)
        putchar('*');

      len = 0;
    } else if (c == '\n') {
      len = 0;
    } else {
      putchar(c);
    }
  }

  return 0;
}
