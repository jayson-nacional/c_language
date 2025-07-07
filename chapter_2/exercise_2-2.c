#include <stdio.h>

int main() {
  // for (int i = 0; i < lim - 1 && ((c = getchar()) != '\n' && c != EOF; i++)
  //		s[i] = c;

  // convert without using && or ||
  // chain the calls
  // version 1
  int lim = 1000;

  int c;
  int expression_value = 1;
  for (int i = 0; expression_value == 1; i++) {
    if (i < lim - 1) {
      if ((c = getchar()) != '\n') {
        if (c != EOF) {
          expression_value = 1;
        } else {
          expression_value = 0;
        }
      } else {
        expression_value = 0;
      }
    } else {
      expression_value = 0;
    }
  }

  // version 2
  int expression_sum = 3; // 3 equates to 3 && operators
  for (int i = 0; expression_sum == 3; i++) {
    expression_sum = 0;
    expression_sum = i < lim - 1;
    expression_sum = expression_sum + ((c = getchar()) != '\n');
    expression_sum = expression_sum + (c != EOF);
  }

  return 0;
}
