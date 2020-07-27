/*#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	double d[20], tmp;
	FILE* fp;
	for (int i = 0; i < 20; ++i)
	{
		scanf("%lf", &d[i]);
	}
	fp = fopen("fdata.txt", "w+");
	for (int i = 0; i < 20; ++i)
	{
		fprintf(fp, "%lf ", d[i]);
	}
	fseek(fp, 0, SEEK_SET);
	for (int j = 0; j < 10; ++j) {
		fscanf(fp, "%lf", &tmp);
		printf("%lf ", tmp);
	}
	fclose(fp);
	return 0;
}*/