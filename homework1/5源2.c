#pragma warning(disable:4996)
#include<stdio.h>
void Sort(int* a, int Size) {
	if (Size <= 1) return;
	for (int i = 0; i < Size - 1; ++i) {
		if (a[i] > a[i + 1]) {
			int tmp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = tmp;
		}
	}
	Sort(a, Size - 1);
}
int main() {
	int fourdig, a[4], max[4] = {-1,-1,-1,-1};
	printf("Please input an integer which has 4 dogits.\n");
	scanf("%d", &fourdig);
	if (fourdig < 1000 || fourdig >9999) {
		printf("ERROR");
		return 0;
	}
	a[0]= fourdig % 10;
	a[1]= fourdig /10 % 10;
	a[2]= fourdig / 100 % 10;
	a[3]= fourdig / 1000 % 10;
	printf("The reserved number is:%d%d%d%d\n", a[0], a[1], a[2], a[3]);
	Sort(a, 4);
	printf("The maximum number is:%d%d%d%d\n", a[3], a[2], a[1], a[0]);
	printf("The minimum number is:%d%d%d%d\n", a[0], a[1], a[2], a[3]);
	return 0;
}