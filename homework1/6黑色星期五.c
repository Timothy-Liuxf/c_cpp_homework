/*现行公元纪年称作格里历，而格里历是在1582年是间断的，而且1582年前是绝对的4年一闰。因此星期
与月份是有偏差的。公园元年元月元日是实际上的星期六（https://max.book118.com/html/2017/0414/100343400.shtm），
而用现在的日期按四年一闰百年不闰四百年再闰的算法计算公元元年元月元日是星期一*/

#pragma warning(disable : 4996)
#include <stdio.h>
#define GREGORY 0
int main()
{
	int theFirstDay; //Record January 1st. 1AD.

#if GREGORY

	{
		//30th. March 2000 is Thursday.
		int leapYears = 2000 / 4 - 2000 / 100 + 2000 / 400;
		int days = (1999 - leapYears) * 365 + leapYears * 366 + 31 + 28 + 30 - 1;

		//Calculate January 1st. 1AD is what day.

		if (days % 7 <= 4)
			theFirstDay = 4 - days % 7;
		else
			theFirstDay = 4 - days % 7 + 7; //This can calculate January 1st is Monday.
	}

#else

	theFirstDay = 6; //The real is Saterday.	//In fact, it is Saterday.

#endif

	int year, leapYears, days, lastOfLastYear, flag;
	scanf("%d", &year);
	leapYears = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
	days = leapYears * 366 + (year - 1 - leapYears) * 365;
	//Calculate the last day of the year before.
	lastOfLastYear = (theFirstDay + (days - 1) % 7) % 7;
	printf("The black Fridays in the year %d are:\n", year);
	days = 0;
	flag = 0;
	for (int i = 1; i <= 12; ++i)
	{
		switch (i - 1)
		{ //Add total months.
		case 0:
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10: //Not include 12.
			days += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days += 30;
			break;
		case 2:
			if (year % 400 == 0 || year % 4 == 0 && year % 100)
				days += 29;
			else
				days += 28;
			break;
		default:
			printf("Error!");
			return 1;
			break;
		}
		days += 13;
		if ((lastOfLastYear + days) % 7 == 5)
		{
			flag = 1;
			switch (i)
			{
			case 1:
				printf("January\n");
				break;
			case 2:
				printf("Febrary\n");
				break;
			case 3:
				printf("March\n");
				break;
			case 4:
				printf("April\n");
				break;
			case 5:
				printf("May\n");
				break;
			case 6:
				printf("June\n");
				break;
			case 7:
				printf("July\n");
				break;
			case 8:
				printf("August\n");
				break;
			case 9:
				printf("September\n");
				break;
			case 10:
				printf("October\n");
				break;
			case 11:
				printf("November\n");
				break;
			case 12:
				printf("December\n");
				break;
			}
		}
		days -= 13;
	}
	if (flag == 0)
		printf("none.\n");

	/*Calculate the maximal and minimal number of black Friday
	a year from 0 to 2018. */

	int max = -1, min = 13;
	for (int i = 1; i <= 2019; ++i)
	{
		int leapYears, days, lastOfLastYear, flag;
		leapYears = (i - 1) / 4 - (i - 1) / 100 + (i - 1) / 400;
		days = leapYears * 366 + (i - 1 - leapYears) * 365;
		lastOfLastYear = (theFirstDay + (days - 1) % 7) % 7;
		days = 0;
		flag = 0;
		for (int j = 1; j <= 12; ++j)
		{
			switch (j - 1)
			{ //Add total months.
			case 0:
				break;
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10: //Not include 12.
				days += 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				days += 30;
				break;
			case 2:
				if (i % 400 == 0 || i % 4 == 0 && i % 100)
					days += 29;
				else
					days += 28;
				break;
			}
			days += 13;
			if ((lastOfLastYear + days) % 7 == 5)
				++flag;
			days -= 13;
		}
		if (max < flag)
			max = flag;
		if (min > flag)
			min = flag;
	}
	printf("\nThe maximal number of black Fridays a year from 1 to 2019 has is %d.\n", max);
	printf("The minimal number of black Fridays a year from 1 to 2019 has is %d.\n", min);
	return 0;
}
