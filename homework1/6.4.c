/*#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main() {
	double x, sumOfPositive = 0.0, sumOfNegative = 0.0, sumOfAbs = 0.0;
	int numOfPositive = 0, numOfNegative = 0;
	for (int i = 0; i < 30; ++i) {
		scanf("%lf", &x);
		sumOfAbs += fabs(x);
		if (x > 0) {
			sumOfPositive += x;
			++numOfPositive;
		}
		else if (x < 0) {
			sumOfNegative += x;
			++numOfNegative;
		}
	}
	printf("The sum of positive numbers is %lf.\nThe sum of negative numbers is %lf.\nThe sum of the absolute value is %lf.\n", sumOfPositive, sumOfNegative, sumOfAbs);
	printf("The number of positive numbers is %d.\nThe number of negative numbers is %d.\n", numOfPositive, numOfNegative);
	return 0;
}*/