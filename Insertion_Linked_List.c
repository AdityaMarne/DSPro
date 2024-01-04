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
    while(p)
    {
        printf("%d",p->data);
        printf("->");
        p = p->next;
    }
}

int count(struct Node *p)
{
	if(p == 0)
	{
		return 0;
	}else{
		return count(p->next)+1;
	}
}

void Insert(struct Node *p,int pos,int x)
{
    struct Node *t;
    if(pos < 0 || pos > count(p))
    {
        return;
    }

    if(pos == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->next = first;
        first = t;
    }else if(pos > 0){
        p = first;
        for(int i=0; i<pos-1 && p; i++)
        {
            p = p->next;
        }
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int main()
{
    struct Node *temp;
    int A[]={10,20,30,40,50};
    //create(A,5);

    //printf("Elements of Linked List :\n");
    //Display(first);

    Insert(first,0,5);
    Insert(first,1,10);
    Insert(first,2,20);
    Insert(first,3,30);
    printf("Elements of Linked List :\n");
    Display(first);
    return 0;
}
