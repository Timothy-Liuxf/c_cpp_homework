/*#pragma warning(disable: 4996) 
#include <stdio.h>
double p(int n) {
	if (n == 0) return 1;
	return n * p(n - 1);
}
int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	double A = p(m) / p(m - n);
	printf("%lf", A);
	return 0;
}*/