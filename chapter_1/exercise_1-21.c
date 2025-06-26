#include <stdio.h>

#define TABSTOP 4

int main() {
  int len = 0;
  int c;
  while ((c = getchar()) == ' ') {
    ++len;
  }

  while (len > TABSTOP) {
    printf("\\t"); // represent tab
    len -= 4;
  }

  while (len > 0) {
    putchar('*'); // represent space
    len--;
  }

  putchar('\n');

  return 0;
}
