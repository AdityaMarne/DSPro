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

void Display(struct Node *p)
{
	printf("Elements of Linked List :");
	while(p != NULL)
	{
		printf("%d",p->data);
		printf("->");
		p = p->next;
	}
	printf("\n");
}

int Length(struct Node *p)
{
	int length=0;
	while(p != NULL)
	{
		length++;
		p = p->next;
	}
	return length;
}

//Recursive length function
int count(struct Node *p)
{
	if(p == 0)
	{
		return 0;	
	}else{
		return count(p->next)+1;
	}	
}

int main()
{
	int A[]={10,20,30,40,50};
	int len;
	
	create(A,5);
	Display(first);
	len = Length(first);
	printf("Length of linked list : %d",len);
	return 0;
}
