/*#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
void Exp(double* x, double* y, double* u, double* v) {
	double u0 = exp(*x) * cos(*y), v0 = exp(*x) * sin(*y);
	*u = u0;
	*v = v0;
}
void Ln(double* x, double* y, double* u, double* v) {
	double u0, v0;
	u0 = log(sqrt((*x) * (*x) + (*y) * (*y)));
	v0 = atan(*y / *x);
	*u = u0;
	*v = v0;
}
void Sin(double* x, double* y, double* u, double* v) {
	double u0, v0, ey;
	ey = exp(*y);
	u0 = sin(*x) * (ey + 1 / ey) / 2;
	v0 = cos(*x) * (ey - 1 / ey) / 2;
	*u = u0;
	*v = v0;
}
void Cos(double* x, double* y, double* u, double* v) {
	double u0, v0, ey;
	ey = exp(*y);
	u0 = cos(*x) * (ey + 1 / ey) / 2;
	v0 = -sin(*x) * (ey - 1 / ey) / 2;
	*u = u0;
	*v = v0;
}
int main() {
	double x = 2.0, y = 3.0;
	printf("exp(%lf+j%lf)=", x, y);
	Exp(&x, &y, &x, &y);
	printf("%lf+j%lf\nln(%lf+j%lf)=", x, y, x, y);
	Ln(&x, &y, &x, &y);
	printf("%lf+j%lf\nsin(%lf+j%lf)=", x, y, x, y);
	Sin(&x, &y, &x, &y);
	printf("%lf+j%lf\ncos(%lf+j%lf)=", x, y, x, y);
	Cos(&x, &y, &x, &y);
	printf("%lf+j%lf\n", x, y);
	return 0;
}
*/