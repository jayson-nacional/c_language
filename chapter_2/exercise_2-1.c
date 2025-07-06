#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
  printf("---SIGNED TYPES---\n");
  printf("CHAR range\n");
  printf("MIN: %d\n", CHAR_MIN);
  printf("MAX: %d\n", CHAR_MAX);
  printf("---------\n");

  printf("SHORT range\n");
  printf("MIN: %d\n", SHRT_MIN);
  printf("MAX: %d\n", SHRT_MAX);
  printf("---------\n");

  printf("INT range\n");
  printf("MIN: %d\n", INT_MIN);
  printf("MAX: %d\n", INT_MAX);
  printf("---------\n");

  printf("LONG range\n");
  printf("MIN: %ld\n", LONG_MIN);
  printf("MAX: %ld\n", LONG_MAX);
  printf("---------\n");

  printf("FLOAT range\n");
  printf("MIN: %.f\n", FLT_MIN);
  printf("MAX: %.f\n", FLT_MAX);
  printf("---------\n");

  putchar('\n');

  printf("---UNSIGNED TYPES---\n");
  printf("UNSIGNED CHAR range\n");
  printf("MIN: %d\n", 0);
  printf("MAX: %u\n", UCHAR_MAX);
  printf("---------\n");

  printf("UNSIGNED SHORT range\n");
  printf("MIN: %d\n", 0);
  printf("MAX: %u\n", USHRT_MAX);
  printf("---------\n");

  printf("UNSIGNED INT range\n");
  printf("MIN: %d\n", 0);
  printf("MAX: %u\n", UINT_MAX);
  printf("---------\n");

  printf("UNSIGNED LONG range\n");
  printf("MIN: %ld\n", 0L);
  printf("MAX: %lu\n", ULONG_MAX);
  printf("---------\n");

  return 0;
}
