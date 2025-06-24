#include <stdio.h>

int main() {
  int c;
  int input_count = 0;
  int char_counts[256]; // represent all ASCII chars - holds 255 characters

  for (int i = 0; i < 256; i++) {
    char_counts[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    input_count++;
    char_counts[c]++;
  }

  for (int i = 0; i < 256; i++) {
    if (char_counts[i] > 0) {
      if (i == ' ') {
        printf("sp\t");
      } else if (i == '\t') {
        printf("\\t\t");
      } else if (i == '\n') {
        printf("\\n\t");
      } else {
        printf("%c\t", i);
      }

      for (int j = 0; j < char_counts[i]; j++) {
        putchar('*');
      }
      putchar('\n');
    }
  }

  printf("Input\t");
  for (int i = 0; i < input_count; i++) {
    putchar('*');
  }
  putchar('\n');

  return 0;
}
