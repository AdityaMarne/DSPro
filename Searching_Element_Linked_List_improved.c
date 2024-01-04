#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	first =(struct Node *)malloc(sizeof(struct Node));
	first->data = A[0];
	first->next = NULL;
	last = first;

	for(i=1; i<n; i++)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data = A[i];
		last->next = t;
		t->next = NULL;
		last = t;
	}
}

void Display(struct Node *p)
{
	while(p != NULL)
	{
		printf("%d ",p->data);
		printf("->");
		p = p->next;
	}
}

struct Node * LSearch(struct Node *p,int key)
{
    struct Node *q;
    while(p != NULL)
    {
        if(p->data == key)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

int main()
{
    struct Node *temp;
    int A[]={10,20,30,40,50};
    create(A,5);

    printf("Elements of Linked List :");
    Display(first);

    temp = LSearch(first,10);
    if(temp)
    {
        printf("Key is found: %d",temp->data);
    }else{
        printf("Key is not found");
    }

    printf("Elements of Linked List :\n");
    Display(first);

    return 0;
}
