#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int Top;
    int *s;
};

void create(struct Stack *st)
{
    printf("Enter the size of stack:");
    scanf("%d",&st->size);

    st->s = (int *)malloc(st->size*sizeof(int));
    st->Top = -1;
}

void Push(struct Stack *st,int x)
{
    if(st->Top == st->size-1)
        printf("Stack is overflow");
    else{
        st->Top++;
        st->s[st->Top] = x;
    }
}

int Pop(struct Stack *st)
{
    int x=-1;
    if(st->Top == -1)
        printf("stack is Underflow");
    else{
        x = st->s[st->Top--];
    }
    return x;
}

int peek(struct Stack st,int pos)
{
    int x = -1;
    if(st.Top - pos + 1 < 0)
    {
        printf("Invalid Position");
    }else{
        x = st.s[st.Top-pos + 1];
    }
    return x;
}

int stackTop(struct Stack st)
{
    if(st.Top == -1)
        return -1;
    else
        return st.s[st.Top];
}

int isEmpty(struct Stack st)
{
    if(st.Top == -1)
        return -1;
    else
        return 0;
}

int isFull(struct Stack st)
{
    if(st.Top == st.size-1)
        return 1;
    else
        return 0;
}

void Display(struct Stack st)
{
	int i;
    for(i=st.Top; i>=0; i--)
    {
        printf("%d ",st.s[i]);
    }
    printf("\n");
}

int main()
{
    struct Stack st;
    create(&st);
    printf("Elements of stack are :");
    Push(&st,1);
    Push(&st,2);
    Push(&st,3);
    Display(st);
    printf("\n");

    //printf("Poped element of stack are :");
    //printf("%d \n",Pop(&st));
    //Display(st);

    printf("Element of stack are at position 1:");
    printf("%d \n",peek(st,1));

    printf("Element of stack top is:");
    printf("%d \n",stackTop(st));
    return 0;
}
