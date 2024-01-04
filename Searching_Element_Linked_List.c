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

struct Node * LSearch(struct Node *p,int key)
{
        while(p != NULL)
        {
            if(key == p->data)
            {
                return p;
            }
            p = p->next;
        }
        return NULL;
}

int main()
{
    struct Node *temp;
    int A[]={10,20,30,40,50};
    create(A,5);

    printf("Elements of Linked List :\n");
    Display(first);

    temp = LSearch(first,30);
    if(temp)
    {
        printf("Key is found: %d",temp->data);
    }else{
        printf("Key is not found");
    }

    return 0;
}
