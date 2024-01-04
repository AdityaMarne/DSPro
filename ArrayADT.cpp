#include<stdio.h>
#include<stdlib.h>

//Array is created in Heap memory

struct Array
{
	int *A; //Pointer A store address of Array in heap
	int size;
	int length;
};

void Display(struct Array arr)
{
	printf("Elemensts are :\n");
	for(int i=0; i<arr.length; i++)
	{
		printf("%d ",arr.A[i]);
	}
}

int main()
{
	struct Array arr;
	int n;
	
	printf("Enter size of an Array :\n");
	scanf("%d",&arr.size);
	
	arr.A = (int *)malloc(arr.size*sizeof(int)); //Array is created in heap
	arr.length = 0;			//Initialy array length is 0.
	
	printf("Enter how many elements you have to store in an array :\n");
	scanf("%d",&n);
	
	printf("Enter all numbers :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	
	arr.length = n;
	
	Display(arr);
	
	return 0;
}
