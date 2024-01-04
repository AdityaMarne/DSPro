#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Array
{
	int *A;
	int n;
	int length;
};

//This fun for creating Array
void create(struct Array arr)
{
	int element;
	for(int i=0; i<arr.n; i++)
	{
		scanf("%d",&element);
		arr.A[i] = element;
		arr.length++;
	}
}

//This fun for Displaying Array
void Display(struct Array arr)
{
	for(int i=0; i<arr.n; i++)
	{
		printf("%d",arr.A[i]);
		printf(" ");
	}
}

//Fun to find a pair in an array with a given sum.
void findPair(struct Array arr,int sum)
{
	for(int i=0; i<arr.n-1; i++)
	{
		for(int j=i+1; j<arr.n; j++)
		{
			//if desired sum is found. print it
			if(arr.A[i] + arr.A[j] == sum)
			{
				printf("Pair found (%d, %d)",arr.A[i],arr.A[j]);
				return;
			}
		}
	}
	//We reach here if the pair is not found.
	printf("Pair not found");
}

int length(struct Array arr)
{
	int Length=0;
	for(int i=0; i<arr.n;i++)
	{
		Length++;
	}
	return Length;
}

int main()
{
	struct Array arr;
	int sum;
	
	printf("Enter the size of Array :\n");
	scanf("%d",&arr.n);
	arr.length = 0;
	
	arr.A = (int *)malloc(sizeof(int)*arr.n);
	
	printf("Enter the elements of array :\n");
	create(arr);
	
	printf("Elements that you have entered :\n");
	Display(arr);
	
	//printf("\nLength of array:");
	//printf("%d",length(arr));
	
	printf("\nEnter the sum that you want to find:");
	scanf("%d",&sum);
	
	printf("\nPair with given sum in the array:");
	findPair(arr,sum);
	
	return 0;
}
