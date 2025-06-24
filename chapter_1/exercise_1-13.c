#include <stdio.h>

int main() {
  int c;
  int input_count = 0;
  int word_char_counter[100];

  for (int i = 0; i < 100; i++) {
    word_char_counter[i] = 0;
  }

  int index = 0;
  while ((c = getchar()) != EOF) {
    ++input_count;

    if (c == ' ' || c == '\t' || c == '\n') {
      index++;
    } else {
      word_char_counter[index]++;
    }
  }

  // Horizontal histogram
  printf("HORIZONTAL HISTOGRAM\n");
  for (int i = 0; word_char_counter[i] > 0; i++) {
    for (int j = 0; j < word_char_counter[i]; j++) {
      putchar('*');
    }
    putchar('\n');
  }

  for (int i = 0; i < input_count; i++)
    putchar('*');

  putchar('\n');
  // End of horizontal histogram

  // Vertical histogram
  printf("VERTICAL HISTOGRAM\n");
  for (int i = input_count; i > 0; i--) { // render row
    for (int j = 0; word_char_counter[j] > 0;
         j++) { // iterate through the words
      if (i <= word_char_counter[j]) {
        putchar('*');
      } else {
        putchar(' ');
      }
    }

    putchar('*'); // input on last column
    putchar('\n');
  }
  // End of vertical histogram

  return 0;
};
