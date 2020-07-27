/*#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	int a, b, c, d, e, x = 6, flag = 0;
	do {
		if ((x - 1) % 5 == 0) {
			a = x / 5;
			if ((4 * a - 1) % 5 == 0) {
				b = 4 * a / 5;
				if ((4 * b - 1) % 5 == 0) {
					c = 4 * b / 5;
					if ((4 * c - 1) % 5 == 0) {
						d = 4 * c / 5;
						if ((4 * d - 1) % 5 == 0) {
							e = 4 * d / 5;
							if (e > 0) flag = 1;
						}
					}
				}
			}
		}
		++x;
	} while (flag == 0);
	--x;
	printf("The number of the apples is initially at least %d.\n", x);
	printf("The numbers of the apples that each person gets are:\nA:%d\nB:%d\nC:%d\nD:%d\nE:%d\n", a, b, c, d, e);
	return 0;
}*/