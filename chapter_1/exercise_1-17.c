#include <stdio.h>

#define MAXLINE 1000
#define MIN_PRINTABLE_LEN 10

int get_line(char s[], int lim);

int main() {
  int current_len;
  char current_line[MAXLINE];
  char longest_line[MAXLINE];

  while ((current_len = get_line(current_line, MAXLINE)) > 0) {
    if (current_len > MIN_PRINTABLE_LEN) {
      printf("%s\n", current_line);
    }
  }
}

int get_line(char s[], int lim) {
  int c;
  int i;

  for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
    if (i < lim - 1) {
      s[i] = c;
    }
  }

  if (i < (lim - 1)) {
    if (c == '\n') {
      s[i] = c;
      ++i;
    }

    s[i] = '\0';
  } else {
    s[lim - 1] = '\0';
  }

  return i;
}
