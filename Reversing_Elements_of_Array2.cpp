#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Reversing of an Array using Auxillary Methond

struct Array
{
	int A[20];
	int size;
	int length;
};

void Display(struct Array arr)
{
	printf("Elements are :\n");
	for(int i=0; i<arr.length; i++)
	{
		printf("%d ",arr.A[i]);
	}
	printf("\n");
}

void Swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;	
}

void Reverse(struct Array *arr)
{
	int i,j;
	for(int i=0,j=arr->length-1; i<j; i++,j--)
	{
		Swap(&arr->A[i],&arr->A[j]);
	}
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	
	Reverse(&arr);
	Display(arr);
	
	return 0;
}
