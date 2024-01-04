#include<stdio.h>
#include<stdlib.h>

//Inserting an element in an Array at any index loaction.

struct Array
{
	int *A;  //Pointer A store address of Array in heap.
	int size;
	int length;
}arr;

//Displaying elements from an array.
void Display(struct Array arr)
{
	printf("Elemensts are :\n");
	for(int i=0; i<arr.length; i++)
	{
		printf("%d ",arr.A[i]);
	}
	printf("\n");
}

//Insertion of elements in the given postion.
void Insertion(struct Array *arr,int index,int key)
{
	if(index >= 0 && index <= arr->length)
	{
		for(int i=arr->length; i>index; i--)
		{
			arr->A[i] = arr->A[i-1];
		}
		arr->A[index] = key;
		arr->length++;
	}

}
int main()
{
	int n,index,key;
	
	printf("Enter an size of array :\n");
	scanf("%d",&arr.size);
	
	arr.A = (int *)malloc(arr.size*sizeof(int)); //Array is created in heap.
	arr.length = 0; //Initialy array length is 0.
	
	printf("Enter no. of elemnts do you want to store in an array :\n");
	scanf("%d",&n);
	
	printf("Enter elements in an Array :\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr.A[i]);
	}
	arr.length = n;
	
	Display(arr);
	
	printf("Enter a index position and key to store in an array :\n");
	scanf("%d %d",&index,&key);
	Insertion(&arr,index,key);
	Display(arr);
	
	
	
	return 0;
}
