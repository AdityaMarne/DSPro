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

void concatinate_Linked_List(struct Node *p,struct Node *q)
{
    third = first;
    p = first;
    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;

}

int main()
{
    int A[]={10,20,30,40,50};
    int B[] = {60,70,80,90,100};

    printf("Elements of 1st Linked List :");
    printf("\n");
    create(A,5);
    Display(first);
    printf("\n");

    printf("Elements of 2nd Linked List :");
    printf("\n");
    create2(B,5);
    Display(second);
    printf("\n");

    printf("Elements of Concateneted Linked List :");
    printf("\n");
    concatinate_Linked_List(first,second);
    Display(third);

    return 0;
}
