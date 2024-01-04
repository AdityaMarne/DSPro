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
	printf("Elements are :\n");
	for(int i=0; i<arr.length; i++)
	{
		printf("%d ",arr.A[i]);
	}
	printf("\n");
}

int Get(struct Array arr,int index)
{
	if(index >= 0 && index < arr.length)
		return arr.A[index];
	return -1;
}

void Set(struct Array *arr,int index, int x)
{	
	if(index >= 0 && index < arr->length)
		arr->A[index] = x;
}

int Max(struct Array arr)
{
	int max = arr.A[0];
	for(int i=1; i<arr.length; i++)
	{
		if(arr.A[i] > max)
		{
			max = arr.A[i];
		}
	}
	return max;
}

int Min(struct Array arr)
{
	int min = arr.A[0];
	for(int i=1; i<arr.length; i++)
	{
		if(arr.A[i] < min)
		{
			min = arr.A[i];
		}
	}
	return min;
}

int Sum(struct Array arr)
{
	int sum = 0;
	for(int i=0; i<arr.length; i++)
	{
		sum = sum + arr.A[i];
	}
	return sum;
}

float Avg(struct Array arr)
{
	return (float)Sum(arr) / arr.length;	
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	int index,get;
	
	Display(arr);
	printf("%d \n",Get(arr,1));
	
	Set(&arr,3,14);
	Display(arr);
	
	printf("%d \n",Max(arr));
	printf("%d \n",Min(arr));
	printf("%d \n",Sum(arr));
	printf("%f \n",Avg(arr));
	return 0;
}
