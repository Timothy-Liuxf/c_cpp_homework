#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	char ifrun = 0 ;
	int year, month;
	printf("Please input the year and the month.\n");
	scanf("%d%d", &year, &month);
	if (year % 100 && year % 4 == 0 || year % 400 == 0) ifrun = 1;
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%d", 31);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%d", 30);
			break;
		case 2:
			printf("%d", ifrun ? 29 : 28);
			break;
		default:
			printf("error");
			break;
	}
	return 0;
}