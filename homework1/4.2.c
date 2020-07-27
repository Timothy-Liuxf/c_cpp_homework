#pragma warning(disable:4996)
#include<stdio.h>
#define P(i) printf("%d",a##i)
int main() {
	int x0,x;
	int a0 , a1, a2, a3, a4, a5, a6, a7;
	printf("Please input a nonnegative integer.\n");
	scanf("%d", &x0);
	x = x0 / 2;
	a0 = x0 % 2;
	a1 = x % 2;
	x /= 2;
	a2 = x % 2;
	x /= 2;
	a3 = x % 2;
	x /= 2;
	a4 = x % 2;
	x /= 2;
	a5 = x % 2;
	x /= 2;
	a6 = x % 2;
	x /= 2;
	a7 = x % 2;
	printf("%d--->", x0);
	P(7), P(6), P(5), P(4), P(3), P(2), P(1), P(0);
}