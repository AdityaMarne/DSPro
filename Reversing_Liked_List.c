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

void Revers_Liked_List(struct Node *p)
{
    int *A,i=0;

    A=(int *)malloc(sizeof(int)*Length(p));
    while(p != NULL)
    {
        A[i] = p->data;
        p = p->next;
        i++;
    }
    p=first;
    i--;
    while(p != NULL)
    {
        p->data = A[i];
        p = p->next;
        i--;
    }
}

int main()
{
	int A[]={10,20,30,40,50};
    int isSorted;

	create(A,5);
	Revers_Liked_List(first);
	Display(first);
}
