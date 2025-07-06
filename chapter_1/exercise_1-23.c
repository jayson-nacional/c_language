#include <stdio.h>

#define IN_CODE 0
#define IN_SINGLELINE 1
#define IN_MULTILINE 2
#define IN_STRING 3
#define IN_CHARACTER 4
#define MAX_SIZE 1000

int main() {
  char code[MAX_SIZE];
  int index = 0;
  int state = IN_CODE;
  int c, p;
  while ((c = getchar()) != EOF) {
    if (state == IN_CODE) {
      if (c == '/' && p == '/')
        state = IN_SINGLELINE;
      else if (c == '*' && p == '/')
        state = IN_MULTILINE;
      else if (c == '"')
        state = IN_STRING;
      else if (c == '\'')
        state = IN_CHARACTER;
    } else {
      if (state == IN_SINGLELINE && c == '\n')
        state = IN_CODE;
      else if (state == IN_MULTILINE && c == '/' && p == '*')
        state = IN_CODE;
      else if (state == IN_STRING && c == '"' && p != '/')
        state = IN_CODE;
      else if (state == IN_CHARACTER && c == '\'')
        state = IN_CODE;
    }

    if (state == IN_CODE || state == IN_STRING || state == IN_CHARACTER) {
      if (c != '/')
        code[index++] = c;
    }

    p = c;
  }

  code[index] = '\0';
  printf("%s\n", code);

  return 0;
}
