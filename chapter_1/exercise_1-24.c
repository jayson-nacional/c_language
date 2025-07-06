#include <stdio.h>

#define IN_CODE 0
#define IN_SINGLELINE 1
#define IN_MULTILINE 2
#define IN_STRING 3
#define IN_CHARACTER 4
#define MAX_SIZE 1000

int main() {
  char grouping_symbols[MAX_SIZE];
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

    if (state == IN_CODE) {
      if (c == '(' || c == '{' || c == '[')
        grouping_symbols[index++] = c;
      else if (c == ')' && grouping_symbols[index - 1] == '(')
        index--;
      else if (c == '}' && grouping_symbols[index - 1] == '{')
        index--;
      else if (c == ']' && grouping_symbols[index - 1] == '[')
        index--;
    }

    p = c;
  }

  if (index == 0)
    printf("Valid syntax\n");
  else
    printf("Invalid syntax, mismatched grouping symbols\n");

  return 0;
}
