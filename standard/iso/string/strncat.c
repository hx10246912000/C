#include<string.h>

int main() {
	char dest[10] = "abc";
	char *src = "def\0ghkl";
	strncat(dest, src, 8);
	return 0;
}
