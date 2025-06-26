#include <stdio.h>

#define LINE_WIDTH 20

int main() {
  char line[LINE_WIDTH];

  int index = 0;
  int c;
  while ((c = getchar()) != EOF) {
    line[index] = c;
    index++;

    int i, j;
    if (c == '\n' || index == LINE_WIDTH - 1) { // end of line reached
      for (i = index; line[i] != ' ' || line[i] != '\t'; i--)
        ;

      for (j = index; line[j] == ' ' || line[j] == '\t'; j--)
        ;

      // j would mean the last non-blank character before line_width

      line[++j] = '\0';
      printf("%s\n", line);

      // repopulate the truncated chars to line for next reprinting
      j++;
      for (index = 0; j < LINE_WIDTH - 1; j++) {
        line[index++] = line[j];
      }
    }
  }

  return 0;
}
