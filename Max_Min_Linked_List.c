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
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    while(p)
    {
        printf("%d",p->data);
        printf("->");
        p = p->next;
    }
}

int Max(struct Node *p)
{
    int max_value = -32768;
    while(p)
    {
        if(max_value < p->data)
        {
            max_value = p->data;
        }
        p = p->next;
    }
    return max_value;
}

int Min(struct Node *p)
{
    int min_value = 32768;
    while(p)
    {
        if(min_value > p->data)
        {
            min_value = p->data;
        }
        p = p->next;
    }
    return min_value;
}
int main()
{
    int max_value,min_value;
	int A[] = {3,5,7,10,15};
	create(A,5);

	printf("Elements of Linked List :\n");
	display(first);


	printf("Maximum element form Linked List :\n");
	max_value = Max(first);
	printf("%d ",max_value);

	printf("Minimun element form Linked List :\n");
	min_value = Min(first);
	printf("%d ",min_value);
    return 0;
}
