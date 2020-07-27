#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int mmain() {
	double x , fx;
	scanf("%lf", &x);
	fx = x * x * x * x - 3 * x * x - 8 * x - 30;
	if (fabs(fx) < 1e-6) printf("Y");
	else printf("N");
	return 0;
}