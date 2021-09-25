#pragma warning(disable : 4996)
#include <stdio.h>
#define NUMBER 1000

int isPrime(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int numOfMin = 0, numOfMax = 0, sumOfPrime = 0;
	int maxMinPrime = 0;

	//Find the minimum 10 primes.

	printf("最小素数：");
	for (int i = 2; i <= NUMBER && numOfMin < 10; ++i)
	{
		if (isPrime(i))
		{
			++numOfMin;
			sumOfPrime += maxMinPrime = i;
			printf("%d, ", i);
		}
	}
	putchar('\n');

	printf("最大素数：");
	for (int i = NUMBER; numOfMax < 10 && i > maxMinPrime; --i)
	{
		//printf("%d--", i);
		if (isPrime(i))
		{
			++numOfMax;
			sumOfPrime += i;
			printf("%d, ", i);
		}
	}
	putchar('\n');

	printf("素数之和:%d\n", sumOfPrime);
	return 0;
}
