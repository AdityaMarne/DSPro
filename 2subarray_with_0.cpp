#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Check if subarray with 0 sum is exists or not.
struct Array
{
	int *A;
	int size;
	int length;
};

void create(struct Array arr)
{
	for(int i=0; i<arr.size; i++)
	{
		scanf("%d",&arr.A[i]);
		arr.length++;
	}
}

void Display(struct Array arr)
{
	for(int i=0; i<arr.size; i++)
	{
		printf("%d ",arr.A[i]);
	}
}

void subArray(struct Array arr)
{
	for(int i=0; i<arr.size; i++)
	{
		//Starting point of the sub array
		//sum is initialized with first element of subarray.
		int sum = arr.A[i];
		if(sum == 0)
		{
			printf("\nFound a subarray with 0 sum");
			return;
		}
		for(int j=1; j<arr.size; j++)
		{
			//We are finding the sum till jth index 
			//starting from ith bindex
			sum = sum + arr.A[j];
			if(sum == 0)
			{
				printf("\nFound a subarray with 0 sum");
				return;
			}
		}
	}
	printf("\nSubarray with 0 sum is not found");
	return;
}

int main()
{
	struct Array arr;
	printf("Enter the size of array:");
	scanf("%d",&arr.size);
	
	arr.A = (int *)malloc(sizeof(int)*arr.size);
	arr.length = 0;
	
	printf("\nEnter the elements:");
	create(arr);
	
	printf("\nElements of array are:");
	Display(arr);
	
	subArray(arr);
	return 0;	
} 
