#include <stdio.h>

int in_string_index(char s[], char c);
int any(char s1[], char s2[]);

int main() {
  char line1[100] = "hello";
  char line2[100] = "f";

  printf("%d\n", any(line1, line2));

  return 0;
}

int in_string_index(char s[], char c) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == c)
      return i;
  }

  return -1;
}

int any(char s1[], char s2[]) {
  for (int i = 0; s1[i] != '\0'; i++) {
    if (in_string_index(s2, s1[i]) >= 0)
      return i;
  }

  return -1;
}
