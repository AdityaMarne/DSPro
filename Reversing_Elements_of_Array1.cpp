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

void Reverse(struct Array *arr)
{
	int *B;
	int i,j;
	
	B = (int *)malloc(arr->length*sizeof(int));
	
	for(i=arr->length-1, j=0; i>=0; i--, j++)
	{
			B[j] = arr->A[i];
	}
	for(int i=0; i<arr->length; i++)
	{
		arr->A[i] = B[i];
	}
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	
	Reverse(&arr);
	Display(arr);
	
	return 0;
}
