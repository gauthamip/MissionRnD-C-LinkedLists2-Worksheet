/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
}*p,*prev;

int linkedListMedian(struct node *head) {
	if (head == NULL)
		return -1;
	else
	{
		int len = 0, pos, i = 1;
		float med;
		p = (struct node*)malloc(sizeof(struct node*));
		p = head;
		while (p != NULL)
		{
			p = p->next;
			len++;
		}
		p = head;
		if (len % 2 != 0)
		{
			pos = (len + 1) / 2;
			while (i < pos)
			{
				prev = p;
				p = p->next;
				i++;
			}
			med = p->num;
		}
		else
		{
			pos = len / 2;
			while (i < pos)
			{
				prev = p;
				p = p->next;
				i++;
			}
			med = p->num;
			p = p->next;
			med = med + p->num;
			med = med / 2;
		}
		return med;
	}
}
