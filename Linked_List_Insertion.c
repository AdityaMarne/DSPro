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
	first = (struct Node *)malloc(sizeof(struct Node));
	first->data = A[0];
	first->next = NULL;
	last = first;

	for(int i=1; i<n; i++)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
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

//Inserting Node in a sorted Linked List
void Insert(struct Node *p,int x)
{
    struct Node *t,*q;
    q = NULL;
    while(p != NULL && p->data < x)
    {
        q=p;
        p = p->next;
    }
    t =(struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = p;
    q->next = t;
}

int main()
{
	int A[]={10,20,30,40,50};
	int len;

	create(A,5);
	Insert(first,34);
	Display(first);

	return 0;
}
