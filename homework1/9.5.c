/*#include <stdio.h>
#include <string.h>
void Sort(char* p[], int n) {
	int k = 0, m = n - 1, m0, k0;
	while (k < m) {
		m0 = m;
		m = k;
		for (int i = k ; i < m0 ; ++i)
			if (strcmp(p[i], p[i + 1]) > 0) {
				char* tmp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = tmp;
				m = i;
			}
		k0 = k;
		k = m;
		for (int j = m; j > k0; --j) {
			if (strcmp(p[j], p[j - 1]) < 0) {
				char* tmp = p[j];
				p[j] = p[j - 1];
				p[j - 1] = tmp;
				k = j;
			}
		}
	}
}
int main() {
	char* p[] = { "zhang" , "gou", "xu" , "zheng" , "mao" , "zhao" , "li" , "bai" , "qing" };
	for (int i = 0; i < 9; ++i)
		printf("%s  ", p[i]);
	Sort(p, 9);
	printf("\n");
	for (int i = 0; i < 9; ++i)
		printf("%s  ", p[i]);
	return 0;
}*/