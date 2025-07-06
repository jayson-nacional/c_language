#include <stdio.h>

#define LINE_LENGTH 20

int main() {
  char line[LINE_LENGTH];

  int char_index = 0;
  int c;
  while ((c = getchar()) != '\n') {
    line[char_index] = c;

    if (char_index == LINE_LENGTH - 1) {
      int last_blank_index = LINE_LENGTH - 1;
      int last_non_blank_index = LINE_LENGTH - 1;

      while (line[char_index] != ' ' && line[char_index] != '\t')
        last_blank_index = --char_index;

      // edge case there is no space at all
      if (last_blank_index < 0) {
        for (int i = 0; i < LINE_LENGTH; i++) {
          putchar(line[i]);
        }

        putchar('\n');
        char_index = 0;
      } else {
        while (line[char_index] == ' ' || line[char_index] == '\t' ||
               line[char_index] == '\0')
          last_non_blank_index = --char_index;

        // print
        for (int i = 0; i <= last_non_blank_index; i++) {
          putchar(line[i]);
        }
        putchar('\n');

        // copy the remaining lines to line
        // edge case is if last blank is same index as line length
        if (last_blank_index == LINE_LENGTH - 1) {
          char_index = 0;

          for (int i = char_index; i < LINE_LENGTH; i++) {
            line[i] = '\0';
          }
        } else {
          char_index = 0;
          for (int i = last_blank_index + 1; i <= LINE_LENGTH - 1; i++) {
            line[char_index] = line[i];
            char_index++;
          }

          for (int i = char_index; i < LINE_LENGTH; i++) {
            line[i] = '\0';
          }
        }
      }
    }

    char_index++;
  }

  if (char_index > 0) {
    for (int i = 0; i < char_index; i++)
      putchar(line[i]);
  }

  putchar('\n');

  return 0;
}
