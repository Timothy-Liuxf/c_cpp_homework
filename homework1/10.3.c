/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
	int num;
	char name[10];
	int grade;
} Student;

typedef struct stunode
{
	int num;
	char name[10];
	int grade;
	struct stunode *next;
} StuNode, *PStuNode;

#define STU_NUM 13

int mainc(void)
{
	Student stu[STU_NUM];
	PStuNode head = NULL, p;
	int i;
	for (i = 0; i < STU_NUM; ++i)
	{
		scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].grade);
	}

	//Build the list

	for (i = STU_NUM - 1; i >= 0; --i)
	{
		p = (PStuNode)malloc(sizeof(StuNode));

		if (p == NULL)
		{
			perror("Memory allocation failed!\n");
			exit(1);
		}

		p->num = stu[i].num;
		p->grade = stu[i].grade;
		strcpy(p->name, stu[i].name);

		//As the question requests, insert the new node to the **head** of the list, **not the tail**!!!!!!

		if (head == NULL)
		{
			head = p;
			p->next = NULL;
		}
		else
		{
			p->next = head;
			head = p;
		}
	}

	//Output the students and delete the list

	printf("\n========================\n\n");
	printf("num      name     grade\n\n");
	while (head)
	{
		p = head->next;
		printf(" %02d%10s%10d\n", head->num, head->name, head->grade);
		free(head);
		head = p;
	}

	
	return 0;
}

#undef STU_NUM
*/
