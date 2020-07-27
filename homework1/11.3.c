#pragma warning (disable:4996)
#include <stdio.h>
typedef struct student {
	char num[7];
	char name[8];
	char gender[3];
	char age[5];
	char grade[9];
} STUDENT;
int main()
{
	STUDENT sts[10] = {
	{"101", "Zhang", "M", "19", "95.6"},
	{"102", "Wang", "F", "18","92.4"} ,
	{"103", "Zhao", "M", "19", "85.7"},
	{"104", "Li", "M", "20", "96.3"},
	{"105", "Gao", "M", "19", "90.2"},
	{"106", "Lin", "M", "18", "91.5"},
	{"107", "Ma", "F", "17", "98.7"},
	{"108", "Zhen", "M", "21", "90.1"},
	{"109", "Xu", "M", "19", "89.5"},
	{"110", "Mao", "F", "18", "94.5"}
	}, st;
	FILE* fp;
	fp = fopen("stu.dat", "w+b");
	fwrite(&sts, sizeof(STUDENT), 10, fp);
	fclose(fp);
	fp = fopen("stu.dat", "r+b");
	printf("num      name      gender age    grade     \n\n");
	for (int i = 0; i < 10; ++i)
	{
		fread(&st, sizeof(STUDENT), 1, fp);
		printf("%-7s  %-8s  %-5s  %-5s  %-9s\n", st.num, st.name, st.gender, st.age, st.grade);
	}
	fclose(fp);
	return 0;
}