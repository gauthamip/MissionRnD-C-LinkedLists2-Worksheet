/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
};
struct node*result;
struct node * reverseLinkedList(struct node *head) {
	struct node *temp, *p;
	temp = head;
	p = NULL;
	while (temp != NULL)
	{
		struct node *result = (struct node*)malloc(sizeof(struct node*));
		result->num = temp->num;
		temp = temp->next;
		result->next = p;
		p = result;
	}
	return p;
}
