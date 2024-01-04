#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
    struct Node *t,*last;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for(int i=1; i<n; i++)
    {
        t =(struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

int Length(struct Node *p)
{
    int len = 0;
    while(p != NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}

void Display(struct Node *p)
{
    while(p != NULL)
    {
        printf("%d",p->data);
        p=p->next;
        printf(" ");
    }
    printf("\n");
}

void Insert(struct Node *p,int index,int x)
{
    struct Node *t;
    if(index < 0 || index > Length(p))
        return;

    if(index == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }else{
        for(int i=0; i<index-1; i++)
        {
            p = p->next;
        }
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->prev = p;
        t->next = p->next;
        if(p->next != NULL)
            p->next->prev = t;
        p->next = t;
    }
}

int Delete(struct Node *p,int index)
{
    struct Node *q;
    int x = -1;

    if(index < 1 || index > Length(p))
        return -1;

    if(index == 1)
    {
        first = first->next;
        if(first != NULL)
            first->prev = NULL;
        x = p->data;
        free(p);
    }else{
        for(int i=0; i<index-1; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if(p->next != NULL)
        {
            p->next->prev = p->prev;
        }
        x = p->data;
        free(p);
    }
    return x;
}

void reverse_D_linked_list(struct Node *p)
{
    struct Node *temp = NULL;
    while(p != NULL)
    {
         temp = p->next;
         p->next = p->prev;
         p->prev = temp;
         p = p->prev;
         if(p != NULL && p->next == NULL)
            first = p;
    }
}

int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    printf("Elements of Linked List :");
    Display(first);
    printf("\n");

    printf("Length of linked list : ");
    printf("%d",Length(first));
    printf("\n");

    printf("Elements of Linked List after insertion :");
    Insert(first,5,60);
    Display(first);
    printf("\n");

    printf("Elements of Linked List after deletion :");
    Delete(first,2);
    Display(first);
    printf("\n");

    printf("Elements of Linked List after reversing :");
    reverse_D_linked_list(first);
    Display(first);
    return 0;
}
