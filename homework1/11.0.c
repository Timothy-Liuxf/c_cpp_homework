#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	FILE* fin, * fout;
	char a[80];
	if ((fin = fopen("a.dat", "r")) == NULL || (fout = fopen("b.dat", "w")) == NULL)
	{
		printf("ERROR!");
		return 1;
	}
	fgets(a, 80, fin);
	while (!feof(fin)) {
		fputs(a, fout);
		fgets(a, 80, fin);
	}
	fclose(fout);
	fclose(fin);
	return 0;
}