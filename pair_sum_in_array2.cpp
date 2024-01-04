#include<iostream>
#include<conio.h>

class Array
{
	private:
		int *A;
		int size;
		int length;
	public:
		Array()
		{
			size = 10;
			length = 0;
			A = new int[size];
		}
		Array(int sz)
		{
			size = sz;
			length = 0;
			A = new int[size];	
		}
		~Array()
		{
			delete []A;
		}
		
		void create();
		void Display();
		void findPair(int sum);
};

void Array::create()
{
	int element;
	for(int i=0; i<size; i++)
	{
		scanf("%d",&element);
		A[i] = element;
		length;
	}
}

void Array::Display()
{
	for(int i=0; i<size; i++)
	{
		printf("%d",A[i]);
		printf(" ");
	}
}

void Array::findPair(int sum)
{
	for(int i=0; i<size-1; i++)
	{
		for(int j=i+1; j<size-1; j++)
		{
			if(A[i] + A[j] == sum)
			{
				printf("Pair found (%d, %d)",A[i],A[j]);
				return;
			}		
		}	
	}
	//We reach here if the pair is not found.
	printf("Pair not found");	
}

int main()
{
	Array *arr1;
	int sz,sum;
	
	printf("Enter the size of array:");
	scanf("%d",&sz);
	
	arr1 = new Array(sz);
	
	printf("Enter the elemnts do you want to store:\n");
	arr1->create();
	
	printf("Display Array:\n");
	arr1->Display();
	
	printf("\nEnter the sum that you want to find:");
	scanf("%d",&sum);
	
	printf("\nPair with given sum in the array:");
	arr1->findPair(sum);
	return 0;
}
