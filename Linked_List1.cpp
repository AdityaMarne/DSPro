#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Linked List creation and display

struct Node
{
	int data;
	struct Node *next;
}*first = NULL;

void create(int A[],int n)
{
	int i;
	struct Node *t,*last;  //t is temporary pointer for node it will help creating node. last is used for pointiong on last node.

	first = (struct Node *)malloc(sizeof(struct Node));

	first->data = A[0];
	first->next = NULL;
	last = first;

	for(i=1; i<n; i++)
	{
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void display(struct Node *p)
{
	while(p != NULL)
	{
		printf("%d",p->data);
		printf("->");
		p = p->next;
	}
}

int main()
{
	int A[] = {3,5,7,10,15};
	create(A,5);

	printf("Elements of Linked List :\n");
	display(first);

	return 0;
}
