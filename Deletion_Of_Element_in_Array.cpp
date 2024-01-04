#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int *A;     //Pointer A store address of Array in heap.
	int size;
	int length;
}arr;

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

//Deletion of an element from given index.
int Deletion(struct Array *arr,int index)
{	
	int x = 0;
	
	if(index >= 0 && index < arr->length)
	{
		x = arr->A[index];
		
		for(int i=index; i<arr->length-1; i++)
		{
			arr->A[i] = arr->A[i+1];	
		}	
		arr->length--;
		return x;
	}
	return 0;
}
int main()
{
	int n,index;
	
	printf("Enter a size of an Array :\n");
	scanf("%d",&arr.size);
	
	arr.A = (int *)malloc(arr.size*sizeof(int));    //Array is created in heap.
	arr.length = 0; //Initialy array length is 0.
	
	printf("Enter no. of elements do you want to store in an array:\n");
	scanf("%d",&n);
	
	printf("Enter elements in an Array :\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr.A[i]);
	}
	arr.length = n;
	
	Display(arr);
	
	printf("Enter index you want to delete an element : \n");
	scanf("%d",&index);
	Deletion(&arr,index);
	Display(arr);
	
	
	return 0;
}
