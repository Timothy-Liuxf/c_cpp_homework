#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

static inline int Isdigit(char ch) {
	if (ch <= '9'&& ch >= '0') return 1;
	return 0;
}
static inline int Isalpha(char ch) {
	if (ch <= 'z' && ch >= 'a' || ch <= 'Z' && ch >= 'A') return 1;
	return 0;
}

int main() {
	int numOfDig = 0, numOfAlpha = 0;
	char c;
	for (int i = 0; i < 50; ++i) {
		scanf("%c", &c);
		if (Isdigit(c)) ++numOfDig;
		else if (Isalpha(c)) ++numOfAlpha;
	}
	printf("The number of letter(s) is %d;\nThe number of digit(s) is %d; \n", numOfAlpha, numOfDig);
	return 0;
}
