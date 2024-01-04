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

int Sort_Linked_List(struct Node *p)
{
    int x = -32768;
    while(p != NULL)
    {
        if(p->data < x)
            return 1;
        x = p->data;
        p = p->next;
    }
    return 0;
}

int main()
{
	int A[]={10,20,30,40,50};
    int isSorted;

	create(A,5);
	Display(first);
	isSorted = Sort_Linked_List(first);
	if(isSorted == 0)
    {
        printf("Linked List is sorted");
    }else{
        printf("Linked list is not sorted");
    }
	return 0;
}
