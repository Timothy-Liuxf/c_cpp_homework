#pragma warning(disable:4996)
#include <stdio.h>
#define NUMBER 20
int main() {
	int numOfMin = 0 , numOfMax = 0 , sumOfPrime = 0 ;
	int Min[10] = { 0 }, Max[10] = { 0 };

	//Find the minimum 10 primes.

	for (int i = 2; i < NUMBER; ++i) {
		int flag = 0;
		for (int j = 2; j * j <= i; ++j) {
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			Min[numOfMin] = i;
			++numOfMin;
		}
		if (numOfMin == 10) break;
	}

	//Not exists 10 primes.

	if (numOfMin < 10) {
		numOfMax = 0;
	}
	else {

		//Find the maximum 10 primes.

		for (int i = NUMBER - 1; i >1; --i) {
			int flag = 0;
			for (int j = 2; j * j <= i; ++j) {
				if (i % j == 0) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				Max[numOfMax] = i;
				++numOfMax;
			}
			if (numOfMax == 10) break;
		}
	}
	//去除重复。

		if (Min[numOfMin - 1] >= Max[numOfMax - 1]) {
			int i = numOfMax - 1;
			while (Max[i] <= Min[numOfMin - 1] && i >= 0) {
				Max[i] = 0;
				--numOfMax;
				--i;
			}
		}
		for (int i = 0; i < 10; ++i) {
			sumOfPrime += Min[i];
			sumOfPrime += Max[i];
		}

	//Output the 20 primes.

	printf("最小素数:");
	for (int i = 0; i < numOfMin - 1; ++i) printf("%d,", Min[i]);
	printf("%d\n", Min[numOfMin - 1]);
	printf("最大素数:");
	for (int i = 0; i < numOfMax - 1; ++i) printf("%d,", Max[i]);
	if(numOfMax > 0) printf("%d\n", Max[numOfMax - 1]);
	printf("\n");
	printf("素数之和:%d",sumOfPrime);
	return 0;
}