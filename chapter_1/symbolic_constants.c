#include <stdio.h>

#define LOWER	0
#define UPPER	300
#define STEP	20

int main() {
	printf("Fahr\tCelsius\n");
	for (float fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%4.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));

	return 0;
}
