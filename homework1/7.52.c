/*#pragma warning(disable:4996)
#include <stdio.h>
int facsum(int n);
int main() {
	int sumOfWanshu = 0;
	printf("500 yi nei suo you qin mi shu you:\n");
	for (int i = 1; i < 500; ++i) {
		int tmp = facsum(i);
		if (tmp == i) {	//Wanshu
			sumOfWanshu += i;
			printf("(%d,%d)\n", i, i);//output the qinmishu
		}
		else if (tmp < i) {	//Small number is in front of the big number.
			if (facsum(tmp) == i) {
				printf("(%d,%d)\n", tmp, i);
			}
		}
	}
	printf("suo you wan shu zhi he wei:%d", sumOfWanshu);
	return 0;
}*/