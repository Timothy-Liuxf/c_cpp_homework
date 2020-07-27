#pragma warning (disable:4996)
#include<stdio.h>
char a[10000], b[10000], c[20000] = {0};
int main() {
	char tmpch;
	int ai = 0, bi = 1, ci = 0;
	for (int i = 0; i < 10000; ++i) {
		tmpch = getchar();
		if (tmpch <= '9' && tmpch >= '0') {
			a[i] = tmpch - '0';
			++ai;
		}
		else break;
	}
	while ((tmpch = getchar()) > '9' || tmpch < '0');
	b[0] = tmpch - '0';
	for (int i = 1; i < 10000; ++i) {
		tmpch = getchar();
		if (tmpch <= '9' && tmpch >= '0') {
			b[i] = tmpch - '0';
			++bi;
		}
		else break;
	}
	int bi0 = bi;
	while (bi > 0) {
		ci = bi0 - bi;
		--bi;
		for (int i = ai - 1; i >= 0; --i) {
			c[ci] += b[bi] * a[i];
			if (c[ci] > 9) {
				c[ci + 1] += c[ci] / 10;
				c[ci] -= c[ci] / 10 * 10;
			}
			++ci;
		}
	}
	if (c[ci] == 0) --ci;
	for (; ci >= 0; --ci) printf("%d", (int)c[ci]);
	return 0;
}