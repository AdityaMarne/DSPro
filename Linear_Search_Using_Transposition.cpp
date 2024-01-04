#include<stdio.h>
#include<conio.h>
//Linear search in an array using Transposition method

struct Array 
{
	int A[20];
	int size;
	int length;
};

//Displaying elements from an array.
void Display(struct Array arr)
{
	printf("Elements are :\n");
	for(int i=0; i<arr.length; i++)
	{
		printf("%d ",arr.A[i]);
	}
	printf("\n");
}

void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int LinearSearch(struct Array *arr,int key)
{
	for(int i=0; i<arr->length; i++)
	{
		if(arr->A[i] == key)
		{
			swap(&arr->A[i],&arr->A[i-1]);
			return i-1;
		}
	}
	return -1;
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	
	printf("%d\n",LinearSearch(&arr,6));
	Display(arr);
	return 0;
}
