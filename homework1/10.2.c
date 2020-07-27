/*#pragma warning (disable:4996)
#include <stdio.h>
typedef struct {
	int ID;
	char name[20];
	int score[5];
	int sum;
} STUDENT;
typedef STUDENT* LPSTUDENT;
void Sort(LPSTUDENT pst[], int n);
void Sum(LPSTUDENT pst[], int n);
LPSTUDENT Find(LPSTUDENT pst[], int n, int val);
int main()
{
	STUDENT st[20];
	LPSTUDENT pst[20], p;
	int n, a;
	printf("Please input the number of the students.\n");
	scanf("%d", &n);
	printf("Input their information: ID, name and scores.\n");
	for (int i = 0; i < n; ++i) {
		scanf("%d%s", &st[i].ID, st[i].name);
		for (int j = 0; j < 5; ++j)
			scanf("%d", &st[i].score[j]);
		pst[i] = &st[i];
	}
	Sum(pst, n);
	Sort(pst, n);
	printf("Please input the ID of the student you want to find. And input -1 to end.\n");
	scanf("%d", &a);
	while (a != -1) {
		p = Find(pst, n, a);
		if (p) {
			printf("ID: %d Name: %s scores: ", p->ID, p->name);
			for (int i = 0; i < 5; ++i)
				printf("%d ", p->score[i]);
			printf("Total score: %d\n", p->sum);
		}
		else printf("Cannot Find!\n");
		printf("Please input another ID of the student you want to find. And input -1 to end.\n");
		scanf("%d", &a);
	}
	printf("==========================\nÅÅÐò½á¹û£º\n");
	for (int i = 0; i < n; ++i) {
		printf("ID: %d Name: %s scores: ", pst[i]->ID, pst[i]->name);
		for (int j = 0; j < n; ++j)
			printf("%d ", pst[i]->score[j]);
		printf("Total score: %d\n", pst[i]->sum);
	}
	return 0;
}
void Sort(LPSTUDENT pst[], int n)
{
	int k = 0, m = n - 1, k0, m0;
	while (k < m) {
		m0 = m;
		m = k;
		for (int i = k; i < m0; ++i) {
			if (pst[i]->sum < pst[i + 1]->sum) {
				LPSTUDENT tmp = pst[i];
				pst[i] = pst[i + 1];
				pst[i + 1] = tmp;
				m = i;
			}
		}
		k0 = k;
		k = m;
		for (int j = m; j > k0; --j) {
			if (pst[j]->sum > pst[j - 1]->sum) {
				LPSTUDENT tmp = pst[j];
				pst[j] = pst[j - 1];
				pst[j - 1] = tmp;
			}
		}
	}
}
void Sum(LPSTUDENT pst[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		pst[i]->sum = 0;
		for (int j = 0; j < 5; ++j)
			pst[i]->sum += pst[i]->score[j];
	}
}
LPSTUDENT Find(LPSTUDENT pst[], int n, int val)
{
	for (int i = 0; i < n; ++i)
		if (pst[i]->ID == val)
			return pst[i];
	return NULL;
}*/