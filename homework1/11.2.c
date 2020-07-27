/*#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	char s[150];
	FILE* fp;
	int i = 0;
	while ((s[i] = getchar()) != '#')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
		++i;
	}
	fflush(stdin);
	s[i] = '\0';
	fp = fopen("upper.txt", "w+");
	fprintf(fp, "%s", s);
	fseek(fp, 0, SEEK_SET);
	fscanf(fp, "%s", s);
	printf("%s", s);
	fclose(fp);
	return 0;
}*/