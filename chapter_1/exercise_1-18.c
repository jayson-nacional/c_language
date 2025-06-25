#include <stdio.h>

#define MAXLINE 1000
#define MIN_PRINTABLE_LEN 10

int get_line(char s[], int lim);
void remove_trailing_blanks(int len, char s[], char o[]);

int main() {
  int current_len;
  char current_line[MAXLINE];
  char output_line[MAXLINE];

  while ((current_len = get_line(current_line, MAXLINE)) > 0) {
    remove_trailing_blanks(current_len, current_line, output_line);
    printf("%s", output_line);
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

void remove_trailing_blanks(int len, char s[], char o[]) {
  // get first non blank char index
  int start_index = 0;
  while (s[start_index] == ' ' || s[start_index] == '\t')
    start_index++;

  if (s[start_index] == '\n' ||
      s[start_index] == '\0') { // completely blank line
    o[0] = '\0';
    return;
  }

  // get the last non blank char index
  int end_index = len - 1;
  while (s[end_index] == '\0' || s[end_index] == '\n' || s[end_index] == ' ' ||
         s[end_index] == '\t')
    end_index--;

  int i = 0;
  while (start_index <= end_index) {
    o[i] = s[start_index];
    start_index++;
    i++;
  }

  o[i] = '\n';
  o[++i] = '\0';
}
