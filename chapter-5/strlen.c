int strlen(char *s);

int main(void) {
	return 0;
}

int strlen(char *s) {
	int n;

	for (n = 0; *s != '\0'; s++) n++;
	return n;
}
