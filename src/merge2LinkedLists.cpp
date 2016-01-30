/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
};

struct node * merge2LinkedLists(struct node *head1, struct node *head2){
		struct node* list, *t, *p;
		list = NULL;
		t = NULL;
		p = NULL;
		while ((head1 != NULL) || (head2 != NULL))
		{
			if (head1 == NULL)
			{
				if (list == NULL)
				{
					list = (struct node *)malloc(sizeof(struct node*));
					list->num = head2->num;
					head2 = head2->next;
					list->next = NULL;
				}
				else
				{
					p = list;
					while (p->next != NULL)
						p = p->next;
					t = (struct node *)malloc(sizeof(struct node*));
					t->num = head2->num;
					head2 = head2->next;
					t->next = NULL;
					p->next = t;
				}


			}
			else if (head2 == NULL)
			{
				if (list == NULL)
				{
					list = (struct node *)malloc(sizeof(struct node*));
					list->num = head1->num;
					head1 = head1->next;
					list->next = NULL;
				}
				else
				{
					p = list;
					while (p->next != NULL)
						p = p->next;
					t = (struct node *)malloc(sizeof(struct node*));
					t->num = head1->num;
					head1 = head1->next;
					t->next = NULL;
					p->next = t;
				}
			}
			else if ((head1->num) > (head2->num))
			{
				if (list == NULL)
				{
					list = (struct node *)malloc(sizeof(struct node*));
					list->num = head2->num;
					head2 = head2->next;
					list->next = NULL;
				}
				else
				{
					p = list;
					while (p->next != NULL)
						p = p->next;
					t = (struct node *)malloc(sizeof(struct node*));
					t->num = head2->num;
					head2 = head2->next;
					t->next = NULL;
					p->next = t;
				}
			}
			else
			{
				if (list == NULL)
				{
					list = (struct node *)malloc(sizeof(struct node*));
					list->num = head1->num;
					head1 = head1->next;
					list->next = NULL;
				}
				else
				{
					p = list;
					while (p->next != NULL)
						p = p->next;
					t = (struct node *)malloc(sizeof(struct node*));
					t->num = head1->num;
					head1 = head1->next;
					t->next = NULL;
					p->next = t;
				}
			}
		}
		return list;
	}

