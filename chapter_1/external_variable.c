#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int get_line(void);
void copy(void);

int main() {
  int len;
  extern int max;
  extern char longest[];

  while ((len = get_line()) > 0) {
    if (len > max) {
      copy();
      max = len;
    }
  }

  printf("%s\n", longest);

  return 0;
}

int get_line(void) {
  extern char line[];
  int c, i;
  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;

  if (c == '\n') {
    line[i] = c;
    i++;
  }

  line[i] = '\0';

  return i;
}

void copy(void) {
  extern char line[];
  extern char longest[];

  int i = 0;
  while ((longest[i] = line[i]) != '\0')
    i++;
}
