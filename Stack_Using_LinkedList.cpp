#include<stdio.h>
#include<stdlib.h>

struct Stack
{
	int data;
	struct Stack *next;
}*Top=NULL;

void push(int x)
{
	struct Stack *t;
	t = new Stack;
	if(t == NULL)
	{
		printf("Stack Overflow\n");
	}else{
		t->data = x;
		t->next = Top;
		Top = t;
	}
}

int pop()
{
	int x = -1;
	struct Stack *t; 
	if(Top == NULL)
	{
		printf("Stack is Empty");
	}else{
		t = Top;
		Top = Top->next;
		x = t->data;
		free(t);
	}
	return x;
}

int peek(int pos)
{
	struct Stack *p = Top;
	for(int i=0; p != NULL &&i<pos-1; i++)
	{
		p = p->next;
	}
	if(p != NULL)
	{
		return p->data;
	}else{
		return -1;
	}
}

int stackTop()
{
	if(Top != NULL)
	{
		return Top->data;
	}
	return -1;
}

int isEmpty()
{
	return Top != NULL ? 0 : 1;
}

int isFull()
{
	struct Stack *t;
	t = new Stack;
	int r = t!=NULL ? 1 : 0;
	free(t);
	return r;
}

void Display()
{
	struct Stack *p;
	p=Top;
	while(p !=  NULL)
	{
		printf("%d ",p->data);
		printf("->");
		p = p->next;
	}
	printf("\n");
}

int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	Display();
	
	pop();
	Display();
	
	printf("%d ",peek(2));
	printf("\n");
	printf("%d ",stackTop());
	printf("\n");
	printf("%d ",isEmpty());
	printf("\n");
	printf("%d ",isFull());
		
	return 0;
}
