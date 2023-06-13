#include <stdio.h>

int atoi(const char s[]);

int main(void) {
	const char text[] = "442";

	printf("%d\n", atoi(text));

}

/* atoi: convert s to integer  */
int atoi(const char s[]) {
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}
