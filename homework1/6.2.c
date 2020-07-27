/*#pragma warning(disable: 4996)
#include<stdio.h>
#include<math.h>
int main() {
	double S = 1.0, term = 1, x ;
	int i = 1;
	scanf("%lf", &x);
	do {
		term *= (0.5 - i + 1) * x / i;
		S += term;
		++i;
	} while (fabs(term) >= 0.000001);
	printf("%lf", S);
	return 0;
}*/