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
    while(p != NULL)
    {
        printf("%d ",p->data);
        printf("->");
        p = p->next;
    }
}

int check_Linked_List_contaning_loop(struct Node *p)
{
    struct Node *q;
    q = p;
    do{
        p = p->next;
        q = q->next;
        q = q != NULL ? q->next : NULL;
    }while(p&&q && p!= q);
    if(p == q)
    {
        return 0;
    }else{
        return -1;
    }
}

int main()
{
    struct Node *t1,*t2;
    int A[]={10,20,30,40,50},checkLoop;

    create(A,5);

    /*t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;*/

    checkLoop = check_Linked_List_contaning_loop(first);
    if(checkLoop == 0){
        printf("Linked list containg loop");
    }else{
        printf("Linked list does not containg loop");
    }

    return 0;
}
