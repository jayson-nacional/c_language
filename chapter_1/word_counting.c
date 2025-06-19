#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int wc = 0; // where wc = word count
  int state = OUT;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++wc;
    }
  }

  printf("Word count: %d\n", wc);

  return 0;
}
