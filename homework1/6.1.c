/*#pragma warning (disable: 4996)
#include<stdio.h>
int main() {
	int p , i ;
	char flag = 0;
	scanf ( "%d" , & p );
	for ( i = 2; i * i < p; ++i) 
		if (p % i == 0) {
			printf ( "%d %d ", i, p / i) ;
			flag = 1;
		}
	if (i* i == p) {
		printf("%d ", i);
		flag = 1;
	}
	if (flag == 0) printf("%d", p);
	return 0;
}*/