#include<stdio.h>
#include<conio.h>

//Binary Search 

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
}

int BinarySearch(struct Array arr,int key)
{
	int l, mid, h; //l = low, mid = middle, h = high
	l = 0;
	h = arr.length - 1;
	
	while(l <= h)
	{
		mid = (l + h) / 2;
		
		if(key == arr.A[mid])
		{
			return mid;
		}
		else if(key < arr.A[mid])
		{
			h = mid - 1;
		}
		else
		{
			l = mid  + 1;
		}
	}
	return -1;
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	
	printf("%d \n",BinarySearch(arr,10));
	Display(arr);
	
	return 0;
}
