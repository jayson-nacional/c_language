#include <stdio.h>

#define MAXLINE 1000

int get_line(char s[], int lim);
void reverse(int len, char s[]);

int main() {
  int current_len;
  char current_line[MAXLINE];

  while ((current_len = get_line(current_line, MAXLINE)) > 0) {
    reverse(current_len, current_line);
  }

  return 0;
}

void reverse(int len, char s[]) {
  for (int i = len - 1; i >= 0; i--) {
    if (s[i] != '\0' && s[i] != '\n')
      putchar(s[i]);
  }

  putchar('\n');
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
