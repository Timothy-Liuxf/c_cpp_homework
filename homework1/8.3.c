/*#pragma warning (disable:4996)
#include <stdio.h>
void Func(int a[5][5], int b[5]) {
	int min;
	for (int i = 0; i < 5; ++i) {
		min = 0x7fffffff;
		for (int j = 0; j < 5; ++j) {
			if (min > a[i][j]) min = a[i][j];
		}
		b[i] = min;
	}
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j)
			printf("%10d", a[i][j]);
		printf(" ||%10d\n\n\n", b[i]);
	}
	return;
}
 int main() {
	int a[5][5], b[5];
	for (int i = 0; i< 5; ++i)
		for (int j = 0; j < 5; ++j)
			scanf("%d", &a[i][j]);
	Func(a, b);
	return 0;
}*/