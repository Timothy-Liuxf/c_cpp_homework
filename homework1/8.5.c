/*#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	int year, month, day, leap = 0, days = 0;
	int a[13] = { 0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 };
	printf("PLease input the year, month and day.\n");
	scanf("%d%d%d", &year, &month, &day);
	if (year >= 2001) leap = ((year - 2001) / 4 - (year - 2001) / 100 + (year - 2001) / 400) + 1;
	else if (month > 2) leap++;
	days += ((year - 2000) * 365 + leap);
	if (year % 4 == 0 && year % 100 || year % 400 == 0) a[2]++;
	for (int i = 0; i < month; ++i) days += a[i];
	days += day;
	int k = (days - 1) % 5;
	if (k < 3) printf("����\n");
	else printf("ɹ��\n");
	return 0;
}*/ 
