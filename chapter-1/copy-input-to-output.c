#include <stdio.h>

/* copy input to ouput 1st version */
main() {
	int c;

	c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
}
