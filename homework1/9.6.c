/*#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>
#include <malloc.h>
char* my_replace(char* s1, char* s2, char* s3) {
	char *s4 = (char*)malloc(sizeof(char) * 1000);
	char* p , *p1 = s4 , *p2 = s1;
	int len2 = strlen(s2), len3 = strlen(s3), dt;
	p = strstr(s1, s2);
	while (p) {
		dt = p - p2;
		strncpy(p1, p2, dt);
		p1 += dt;
		strncpy(p1, s3, len3);
		p1 += len3;
		p2 += dt + len2;
		p = strstr(p2, s2);
	}
	strcpy(p1, p2);
	return s4;
}
int main() {
	char* s;
	char s1[100], s2[20], s3[20];
	scanf("%s%s%s", s1, s2, s3);
	s = my_replace(s1, s2, s3);
	printf("%s", s);
	free(s);
	return 0;
}*/