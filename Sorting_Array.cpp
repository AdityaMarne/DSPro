#include<stdio.h>
#include<conio.h>


struct Array
{
	int A[20];
	int size;
	int length;	
};

void Display(struct Array arr)
{
	printf("Elements are : \n");
	for(int i=0; i<arr.length; i++)
	{
		printf("%d ",arr.A[i]);
	}
	printf("\n");
}

//Insert an element in a sorted array with valid index position.
void InsertSort(struct Array *arr,int x)
{
	int i = arr->length-1;
	
	if(arr->length == arr->size)
	{
		return ;
	}
	
	while(i>=0 && arr->A[i] > x)
	{
		arr->A[i+1] = arr->A[i];
		i--;
	}
	arr->A[i+1] = x;
	arr->length++;
}

//Check if array is sorted or not
int isSorted(struct Array arr)
{
	for(int i=0; i<arr.length-1;i++)
	{
		if(arr.A[i] > arr.A[i+1])
		{
			return 0;
		}
	}
	return 1;
}

void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//In this function we are placing all negative no. on left hand side and all positive no. on right hand side.
void Rearrange(struct Array *arr)
{
	int i,j;
	 i = 0;
	 j = arr->length - 1;
	
	while (i < j)
	{
		while(arr->A[i] < 0 )
		{
			i++;
		}
		while(arr->A[j] >= 0)
		{ 
			j--;
		}
		if(i < j)
		{
			swap(&arr->A[i],&arr->A[j]);
		}
	}
}

int main()
{
	struct Array arr = {{2,-3,25,10,-15,-7},10,6};
	
	//InsertSort(&arr,4);
	//printf("%d \n",isSorted(arr));
	Rearrange(&arr);
	Display(arr);
	return 0;
}
