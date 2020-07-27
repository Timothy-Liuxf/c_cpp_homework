/*#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	double s = 0.0;
	int fb1 = 0, fb2 = 1, term = 1 , n ;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		int tmp = fb2;
		fb2 += fb1;
		fb1 = tmp;
		s += (double)fb2 / fb1;
	}
	printf("%lf", s);
	return 0;
}*/