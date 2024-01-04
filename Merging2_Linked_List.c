#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

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


void create2(int B[],int n)
{
    struct Node *t,*last;

    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = B[0];
    second->next = NULL;
    last = second;

    for(int i=1; i<n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = B[i];
        t->next = NULL;
        last->next = t;
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

void merging_Linked_List(struct Node *p,struct Node *q)
{
    struct Node *last;

    if(p->data < q->data)
    {
        third = last = p;
        p = p->next;
        last->next = NULL;
    }else{
        third = last = second;
        q = q->next;
        last->next = NULL;
    }
    while(p != NULL && q != NULL)
    {
        if(p->data < q->data)
        {
            last->next = p;
            last = first;
            p = p->next;
            last->next = NULL;
        }else{
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if(p != NULL)
    {
        last->next = p;
    }else{
        last->next = q;
    }
}

int main()
{
    int A[]={2,8,10,15};
    int B[] = {4,7,12,14};

    printf("Elements of 1st Linked List :");
    printf("\n");
    create(A,4);
    Display(first);
    printf("\n");

    printf("Elements of 2nd Linked List :");
    printf("\n");
    create2(B,4);
    Display(second);
    printf("\n");

    printf("Elements of Merge Linked List :");
    printf("\n");
    merging_Linked_List(first,second);
    Display(third);

    return 0;
}
