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

//Deletion of Node at postion 0 and and any other position
int Delete(struct Node *p,int pos)
{
    struct Node *q=NULL;
    int x;
    if(pos < 0 || pos > Length(p))
        return -1;
    if(pos == 0)
    {
        first = first->next;
        x = p->data;
        free(p);
    }else{
        for(int i=0; i<pos-1; i++)
        {
            q=p;
            p=p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
    }

    return x;
}

int main()
{
	int A[]={10,20,30,40,50};
	int x;

	create(A,5);
	x = Delete(first,2);
	printf("%d",x);
	Display(first);

	return 0;
}
