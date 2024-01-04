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
	printf("Elements of Linked List :\n");
	while(p != NULL)
	{
		printf("%d",p->data);
		printf("->");
		p = p->next;
	}
	printf("\n");
}

int Sum(struct Node *p)
{
	int sum=0;
	while(p != NULL)
	{
		sum += p->data; 
		p = p->next;
	}
	return sum;
}

int main()
{
	int A[]={10,20,30,40,50};
	int sum;
	
	create(A,5);
	Display(first);
	sum = Sum(first);
	printf("Sum of elements : %d",sum);
	return 0;
}
