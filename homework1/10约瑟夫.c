#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int num;
	struct node* next;
} NODE;
typedef NODE* LPNODE;
void pop(LPNODE* ptr, LPNODE* old);
int main() {
	int m, n ,itr = 1, sum = 0;
	LPNODE head = NULL, p = NULL, q = NULL;
	scanf("%d%d", &m, &n);
	p = (LPNODE)malloc(sizeof(NODE));
	head = p;
	p->num = 1;
	p->next = NULL;
	q = p;
	for (int i = 2; i <= m ; ++i) {
		p = (LPNODE)malloc(sizeof(NODE));
		q->next = p;
		p->next = NULL;
		p->num = i;
		q = p;
	}
	q->next = head;
	while (sum != m - 1) {
		if (itr == n) {
			itr = 0;
			pop(&head, &p);
			++sum;
		}
		else {
			p = head;
			head = head->next;
		}
		++itr;
	}
	printf("%d persons, every %d persons out:\nThe left number is %d\n", m, n, head->num);
	free(head);
	return 0;
}
void pop(LPNODE * ptr, LPNODE * old) {
	LPNODE p = *ptr;
	if (!*ptr) return;
	*ptr = p->next;
	free(p);
	(*old)->next = *ptr;
}