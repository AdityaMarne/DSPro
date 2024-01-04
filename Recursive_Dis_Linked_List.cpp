#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
	struct Node *t,*last;
	first = new Node;
	first->data = A[0];
	first->next = NULL;
	last = first;
	
	for(int i=1; i<n; i++)
	{
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;	
	}	
}

//Writing recursive function for displaying linked list
void R1Display(struct Node *p)
{
	//It will display elements in forward direction
	printf("Linkeed list elements are:\n");
	if(p != NULL)
	{
		printf("%d ",p->data);
		R1Display(p->next);
	}
}

//Writing recursive function for displaying linked list
void R2Display(struct Node *p)
{
	//It will display elements in backward direction
	if(p != NULL)
	{
		R2Display(p->next);
		printf("%d ",p->data);
	}
}

int main()
{
	int A[]={3,5,7,10,15};
	create(A,5);
	
	//R1Display(first);
	R2Display(first);
	return 0;
}
