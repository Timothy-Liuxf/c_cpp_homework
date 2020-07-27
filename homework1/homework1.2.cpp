#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p, s;
	scanf("%lf%lf%lf", &a, &b, &c);
	p = a / 2 + b / 2 + c / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%lf", s);
	return 0;
}
