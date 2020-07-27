/*#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int a[10], max = 0x80000001, maxi = 10;
	for (int i = 0; i < 10; ++i) {
		scanf("%d", &a[i]);
	}
	for (int i = 9; i >= 0; --i) {
		printf("%d ", a[i]);
		if (max < a[i]) {
			max = a[i];
			maxi = i;
		}
	}
	printf("\n");
	printf("The position of the maximal number is: %d\n", maxi);
	return 0;
}*/