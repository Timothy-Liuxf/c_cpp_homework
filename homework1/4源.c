#include <stdio.h>
#define PI 3.1415926
#pragma warning(disable : 4996)
int main()
{
	double r, h, ssum, s, v;
	printf("Please input the radius and the height of the column.\n");
	scanf("%lf%lf", &r, &h);
	s = 2 * PI * r * h;
	v = PI * r * r * h;
	ssum = s + 2 * PI * r * r;
	printf("The cemianji of the column is %.4lf.\nThe zongmianji of the column is %.4lf.\nThe tiji of the column is %.4lf.\n", s, ssum, v);
	return 0;
}