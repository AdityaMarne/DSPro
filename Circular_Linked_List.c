#include<stdlib.h>
#include<stdio.h>

struct Node
{
int data ;
struct Node *next;
}*Head;

void create(int A[],int n)
{
    struct Node *t,*last;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for(int i=0; i<n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    do{
        printf("%d",p->data);
        printf("->");
        p = p->next;
    }while(p != Head);
    printf("\n");
}

void Insert(int pos,int x)
{
    struct Node *t,*p;
    if(pos == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        if(Head == NULL)
        {
            //Code is for Head is Null
            Head = t;
            Head->next = Head;
        }else{
            //Code is for linked node t at location 0
            p = Head;
            while(p->next != Head)
            {
                p = p->next;
            }
            p->next = t;
            t->next = Head;
            Head = t;
        }
    }else{
        //Code id for location is other than 0
        p = Head;
        for(int i=0; i<pos-1; i++)
        {
            p = p->next;
        }
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}


int Delete(struct Node *p,int pos)
{
    struct Node *q;
    int x;

    if(pos == 1)
    {
        while(p->next != Head)
            p = p->next;
        x = Head->data;
        if(p == Head)
        {
            free(Head);
            Head = NULL;
        }else{
            p->next = Head->next;
            free(Head);
            Head = p->next;
        }
    }else{
        for(int i=0; i<pos-1; i++)
            p = p->next;

        q = p->next;
        p->next = q->next;
        x = q->data;
        free(q);
    }
    return x;
}

int main()
{
    int A[]={8,3,9,6,2};
    create(A,5);
    Insert(3,7);
    Delete(Head,2);
    display(Head);
return 0;
}
