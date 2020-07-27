/*#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student {
	int num;
	char name[10];
	int grade;
} STU;
typedef struct stunode {
	int num;
	char name[10];
	int grade;
	struct stunode* next;
} STUNODE;
typedef STUNODE* LPSTUNODE;

int main()
{
	int tmp;
	STU st[13];
	LPSTUNODE p = NULL, q = NULL, head = NULL;
	for (int i = 0; i < 13; ++i) {
		scanf("%d%s%d", &st[i].num, st[i].name, &st[i].grade);
	}

	//Build the list

	for (int i = 0; i < 13; ++i) {
		p = (LPSTUNODE)malloc(sizeof(STUNODE));
		if (!head) head = p;
		else q->next = p;
		p->next = NULL;
		p->num = st[i].num;
		p->grade = st[i].num;
		strcpy(p->name, st[i].name);
		q = p;
	}

	//Output and delete list

	
	printf("\n========================\n\n");
	printf("num      name     grade\n\n");
	while (head) {
		p = head->next;
		printf(" %02d", head->num);
		tmp = 10 - strlen(head->name);
		for (int i = 0; i < tmp; ++i) {
			printf(" ");
		}
		printf("%s     %5d\n", head->name, head->grade);
		free(head);
		head = p;
	}
	return 0;
}*/