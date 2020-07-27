/*#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student {
	int num;
	char name[10];
	int grade;
} STU;
typedef STU* LPSTU;
typedef struct stunode {
	LPSTU data;
	struct stunode* next;
} STUNODE;
typedef STUNODE* LPSTUNODE;
void output_delete(LPSTUNODE head);
int main() {
	int k;
	STU st[13];
	LPSTUNODE p = NULL, head[3] = { NULL, NULL, NULL }, q[3] = { NULL, NULL, NULL };
	for (int i = 0; i < 13; ++i) {
		scanf("%d%s%d", &st[i].num, st[i].name, &st[i].grade);
	}

	//Insert

	for (int i = 0; i < 13; ++i) {
		k = 10 - st[i].grade / 10;
		if (k == 0) ++k;
		p = (LPSTUNODE)malloc(sizeof(STUNODE));
		if (!head[k - 1]) head[k - 1] = p;
		else q[k - 1]->next = p;
		p->data = &st[i];
		p->next = NULL;
		q[k - 1] = p;
	}

	//output and delete

	printf("\nFrom 90 To 100:\n");
	output_delete(head[0]);
	printf("\nFrom 80 To 89:\n");
	output_delete(head[1]);
	printf("\nFrom 70 To 79:\n");
	output_delete(head[2]);
	return 0;
}
void output_delete(LPSTUNODE head) {
	int tmp;
	LPSTUNODE p;
	printf("========================\n\n");
	printf("num      name     grade\n\n");
	while (head) {
		p = head->next;
		printf(" %02d", head->data->num);
		tmp = 10 - strlen(head->data->name);
		for (int i = 0; i < tmp; ++i) {
			printf(" ");
		}
		printf("%s     %5d\n", head->data->name, head->data->grade);
		free(head);
		head = p;
	}
}
*/