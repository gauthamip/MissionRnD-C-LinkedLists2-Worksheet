/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};
struct node * insertAtEveryKthNode(struct node *head, int K) {
	struct node *p, *result;
	p = head;
	result = p;
	int i = 0;
	while (p != NULL)
	{
		i++;
		if (i == K)
		{
			struct node* t = (struct node*)malloc(sizeof(struct node*));
			t->num = K;
			t->next = p->next;
			p->next = t;
			i = -1;
		}
		p = p->next;
	}

	return head;
}