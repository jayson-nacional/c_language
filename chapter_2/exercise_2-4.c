#include <stdio.h>

int in_string_index(char s[], char c);
void squeeze(char s1[], char s2[]);

int main() {
  char line1[100] = "hello";
  char line2[100] = "hi";
  squeeze(line1, line2);

  printf("%s\n", line1);

  return 0;
}

int in_string_index(char s[], char c) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == c)
      return i;
  }

  return -1;
}

void squeeze(char s1[], char s2[]) {
  int i = 0;
  int j = 0;

  while (s1[i] != '\0') {
    if (in_string_index(s2, s1[i]) >= 0) {
      i++;
    } else {
      s1[j++] = s1[i++];
    }
  }

  s1[j] = '\0';
}
