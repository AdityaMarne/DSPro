#include<stdio.h>
#include<stdlib.h>

struct Stack
{
	char data;
	struct Stack *next;	
}*Top=NULL;

void push(char x)
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

char pop()
{
	char x = -1;
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

int isBalance(char *exp)
{
	struct Stack st;
	for(int i=0; exp[i] != '\0'; i++)
	{
		if(exp[i] == '(')
		{
			push(exp[i]);
		}else if(exp[i] == ')')
		{
			if(Top == NULL)
			{
				return 0;
			}
			pop();
		}
	}
	if(Top == NULL)
		return 1;
	else
		return 0;
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
	char *exp="((a+b)*(c-d))";
	
	printf("%d",isBalance(exp));
	return 0;
}
