#include <stdio.h>

int main() {
  int c;
  long nc = 0;

  while ((c = getchar()) != EOF)
    ++nc;

  printf("%ld\n", nc);

  return 0;
}
