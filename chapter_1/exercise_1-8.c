#include <stdio.h>

int main() {
  int bl, tb, nl; // where bl = blanks, tb = tabs, nl = new lines
  int c;

  bl = tb = nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++bl;
    else if (c == '\t')
      ++tb;
    else if (c == '\n')
      ++nl;
  }

  printf("Blanks: %d\n", bl);
  printf("Tabs: %d\n", tb);
  printf("Newlines: %d\n", nl);

  return 0;
}
