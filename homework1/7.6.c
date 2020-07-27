/*#pragma warning(disable:4996)
#include <stdio.h>
unsigned long long fac(int k) {
	if (k < 0) {
		printf("ERROR!");
		return 0;
	}
	if (k == 0) return 1;
	return k * fac(k - 1);
}
int main() {
	int m, n;
	unsigned long long sum = 0;
	printf("Please input m and n:\n");
	scanf("%d%d", &m, &n);
	if (m < 0 || n < 0 || m > n) printf("ILLEGAL!");
	else {
		sum = fac(m);
		unsigned long long p = sum;
		for (int i = m + 1; i <= n; ++i) {
			p *= i;
			sum += p;
		}
		printf("%llu", sum);
	}
	return 0;
}
*/