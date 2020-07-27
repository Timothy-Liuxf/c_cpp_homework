/*#pragma warning (disable:4996)
#include <stdio.h>
int main() {
	int a[4][6], min = 0x7fffffff, minx = -1, miny = -1;
	for (int i = 0; i < 4; ++i)
		for (int j = 0; j < 6; ++j) {
			scanf("%d", &a[i][j]);
			if (min > a[i][j]) {
				min = a[i][j];
				minx = i;
				miny = j;
			}
		}
	printf("最小元素行下标是: %d;\n最小元素列下标是: %d;\n", minx, miny);
	return 0;
}*/