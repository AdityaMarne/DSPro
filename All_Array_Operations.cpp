#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Array
{
	private:
		int *A;
		int size;
		int length;
		void swap(int *x,int *y);
				
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
		
		void Display();
		void Add(int x);			    //Same Append Function.
		void Insert(int index, int x);  //Insert an element at given index.
		int  Deletion(int index);      //Deletion of an element at given index. 
		int LinearSearch(int key);	  //Linear Search operation on an Array
		int LinearSearchTransposiotion(int key); /*In this if element if found then exchange its position with is 
												previous index element.*/
		int LinearSearchMoveToHead(int key);   /*In this if element if found then exchange its position with index 
											  0 element*/
		int BinarySearch(int key);	  //Binary Search operation on an Array.
		int Get(int index);          //Get the element at given index. 
		int Set(int index,int x);     //Set the element at given index.
		int Max();					 //Return maxixmum number in an Array.
		int Min();					 //Return minimun number in an Array.
		int Sum();					//Return sum of all the elements in an Array.
		int Avg();				   //Return average of all the elements in an Array.
		void Reverse();			  /*Reverse an elements in an original Array.
								Original Array(A) is the array that we have created first.*/ 
		void Reverse2();			 /*Reverse an elements in an original Array.
								Original Array(A) is the array that we have created first.*/
		int isSorted();       //Check if array is sorted or not.
		void InsertSort(int x);  /*Insert an element in a sorted Array in valid index postition*/
		void Rearrange();      //In this we place all negative number on LHS and positive of right hand side
		Array* Merge(Array arr2);	//In this we merging two sorted array
		
		/*
		Set operation on an sorted and unsoretd Array
		1. Union
		2. Intersection
		3. Difference
		*/
		Array* Union_On_Unsorted(Array arr2);
		Array* Intersection_On_Unsorted(Array arr2);
		Array* Difference_On_Unsorted(Array arr2);
		
};

void Array :: Display()
{
	int i;
	cout<<"Elements are :"<<endl;
	for(i = 0; i < length; i++)
	{
		cout<<A[i]<<" ";
	}
}

//Add element at last index position
void Array :: Add(int x)
{
	if(A[length] < size)
	{
		A[length] = x;
	}
	length++;
}

//Insert element at given index
void Array :: Insert(int index,int x)
{
	if(index >= 0 && index <= length)
	{
		for(int i = length; i > index; i--)
		{
			A[i] = A[i-1];
		}
		A[index] = x;
		length++;
	}
}

//Deletion of an element at given index.
int Array :: Deletion(int index)
{
	int x;
	if(index >= 0 && index < length)
	{
		x = A[index];
		for(int i = index; i < length-1; i++)
		{
			A[i] = A[i+1];
		}
		length--;
		return x;
	}
	return 0;
}

//Linear Search operation on an Array
int Array :: LinearSearch(int key)
{
	
	for(int i = 0; i < length; i++)
	{
		if(A[i] == key)
		{
			return i;
		}	
	}	
	return -1;
} 

void Array :: swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

//In this if element if found then exchange its position with is previous index element.
int Array :: LinearSearchTransposiotion(int key)
{
	for(int i = 0; i < length; i++)
	{
		if(A[i] == key)
		{
			swap(&A[i],&A[i-1]);
			return i-1;
		}
	}
	return -1;
}

//In this if element if found then exchange its position with index 0 element
int Array :: LinearSearchMoveToHead(int key)
{
	for(int i = 0; i < length; i++)
	{
		if(A[i] == key)
		{
			swap(&A[i],&A[0]);
			return 0;
		}
	}
	return -1;
}

//Binary Search operation on an Array.
int Array :: BinarySearch(int key)
{
	int l,h,mid;
	l = 0;
	h = length-1;
	
	while(l <= h)
	{
		mid = (l+h)/2;
		if(A[mid] == key)
		{
			return mid;
		}
		else if(key < A[mid])
		{
			h = mid - 1;
		}
		else if(key > A[mid])
		{
			l = mid + 1;
		}
	}
	return -1;
}

//Get the element at given index.
int Array :: Get(int index)
{
	if(index >= 0 && index < length)
	{
		return A[index];
	}
}

//Set the element at given index.
int Array :: Set(int index,int x)
{
	if(index >= 0 && index < length)
	{
		A[index] = x;   //Override the element at given index.
	}
}

//Return maxixmum number in an Array.
int Array :: Max()
{
	int max;
	max = A[0];
	for(int i = 1; i < length; i++)
	{
		if(A[i] > max)
		{
			max = A[i];
		}
	}
	return max;
}

//Return minimumn number in an Array.
int Array :: Min()
{
	int min;
	min = A[0];
	for(int i = 1; i < length; i++)
	{
		if(A[i] > min)
		{
			min = A[i];
		}
	}
	return min;
}

//Return sum of all the elements in an Array.
int Array :: Sum()
{
	int sum;
	sum = 0;
	for(int i = 0; i < length; i++)
	{
		sum = sum + A[i];
	}
	return sum;
}

//Return average of all the elements in an Array.
int Array :: Avg()
{
	int sum;
	sum = 0;
	for(int i = 0; i < length; i++)
	{
		sum = sum + A[i];
	}
	return (float)sum / length;
}

//Reverse an elements in an original Array.
//Original Array(A) is the array that we have created first.
void Array :: Reverse()
{
	int *B;
	
	B = (int *)malloc(length*sizeof(int)); //Here we create an extra array in Heap memory pointer B is pointing to that Heap Array.
	
	for(int i = length-1; i >= 0; i--)
	{
		for(int j = 0; ; j++)
		{
			B[j] == A[i]; //Here we copy elements form original array To B in reverse order.
		}
	}
	
	for(int i = 0; i < length; i++)
	{
		A[i] = B[i]; //Here we copy elements from Array B to Original Array A.
	}
	
}

 /*Reverse an elements in an original Array.
Original Array(A) is the array that we have created first.*/
void Array :: Reverse2()
{
	int i,j;
	j = length-1;
	for(i = 0; i < j; i++)
	{
		for(j = length-1; ; j--)
		{
			swap(&A[i],&A[j]);
		}
	}
}

//Check if array is sorted or not.
int Array :: isSorted()
{
	for(int i = 0; i < length; i++)
	{
		if(A[i] > A[i+1])
		{
			return 0;		//0 :- False means array is not sorted.
		}
	}
	return 1;              //1 :- True means array is sorted.
}

/*Insert an element in a sorted Array in valid index postition*/
void Array :: InsertSort(int x)
{
	int i;
	i = length-1;
	if(length == size)
	{
		return;
	}
	while(i >= 0 && A[i] > x)
	{
		A[i+1] = A[i];
		i--;
	}
	A[i+1] = x;
	length++;
}

//In this we place all negative number on LHS and positive of right hand side
void Array :: Rearrange()
{
	int i,j;
	i = 0;
	j = length-1;
	while(i < j)
	{
		while(A[i] < 0)
		{
			i++;
		}
		while(A[j] >= 0)
		{
			j--;
		}
		if(i < j)
		{
			swap(&A[i],&A[j]);
		}
	}
}

//In this we merging two sorted array
Array* Array :: Merge(Array arr2)
{
	int i,j,k;
	i=j=k=0;
	
	//Array is created in heap to store elements form arr1 and arr2.
	Array *arr3=new Array(length+arr2.length);
	
	while(i < length && j < arr2.length)
	{
		//if arr1 first element is small than arr2 the start form arr1.
		if(A[i] < arr2.A[j])
		{
			arr3->A[k] = A[i];
			k++;
			i++;
		}
		else if(A[i] > arr2.A[j])
		{
		//if arr1 first element is greater than arr2 the start form arr2.	
			arr3->A[k] = arr2.A[j];
			k++;
			i++;
		}
		//Copy all remaingin array elements form arr1 to arr3. 
		for(; i < length; i++)
		{
			arr3->A[k] = A[i];
			k++;
		}
		//Copy all remaingin array elements form arr2 to arr3.
		for(; j < arr2.length; j++)
		{
			arr3->A[k] = arr2.A[i];
			k++;
		}
		
		//arr3 length is length of arr1 + arr2 length.
		arr3->length = length + arr2.length;
		
		//return arr3 from heap memory.
		return arr3;
	}
}

Array* Array :: Union_On_Unsorted(Array arr2)
{
	int i,j,k;
	i=j=k=0;
	
	//Array is created in heap to store elements form arr1 and arr2.
	Array *arr3=new Array(length+arr2.length);
	
	while(i < length && j < arr2.length)
	{
		//if arr1 first element is small than arr2 the start form arr1.
		if(A[i] < arr2.A[j])
		{
			arr3->A[k] = A[i];
			k++;
			i++;
		}
		else if(arr2.A[j] < A[i])
		{
		//if arr1 first element is greater than arr2 the start form arr2.
			arr3->A[k] = A[j];
			k++;
			i++;
		}
		else if(A[i] == arr2.A[j])
		{
		//if arr1 first element is equal to arr2 element then store any on array element in arr3.
			arr3->A[k] = A[i];
			k++;
			i++;
			j++;
		}
	}
	
	//Copy all remaingin array elements form arr1 to arr3. 
	for(; i < length; i++)
	{
		arr3->A[k] = A[i];
		k++;
	}
	//Copy all remaingin array elements form arr2 to arr3.
	for(; j < arr2.length; j++)
	{
		arr3->A[k] = arr2.A[i];
		k++;
	}
		
	//arr3 length is length of arr1 + arr2 length.
	arr3->length = k;
		
	//return arr3 from heap memory.
	return arr3;
}

Array* Array :: Intersection_On_Unsorted(Array arr2)
{
	int i,j,k;
	i=j=k=0;
	
	//Array is created in heap to store elements form arr1 and arr2.
	Array *arr3=new Array(length+arr2.length);
	
	while(i < length && j < arr2.length)
	{
		if(A[i] > arr2.A[j])
		{
			i++;
		}
		else if(arr2.A[j] < A[i])
		{
			j++;
		}
		else if(A[i] == arr2.A[j])
		{
			arr3->A[k] = A[i];
			k++;
			i++;
			j++;
		}
	}
	
	arr3->length = k;
	return arr3;
}

Array* Array :: Difference_On_Unsorted(Array arr2)
{
	int i,j,k;
	i=j=k=0;
	
	//Array is created in heap to store elements form arr1 and arr2.
	Array *arr3=new Array(length+arr2.length);
	
	while(i < length && j < arr2.length)
	{
		if(A[i] < arr2.A[j])
		{
			arr3->A[k] == A[i];
			k++;
			i++;
		}
		else if(arr2.A[j] < A[i])
		{
			j++;
		}
		else if(A[i] == arr2.A[j])
		{
			i++;
			j++;
		}
	}
	
	for(; i<length; i++)
	{
		arr3->A[k] = A[i];
		k++;
	}
	arr3->length = k;
	return arr3;
}

int main()
{
	int sz,ch,x,index;
	Array *arr1;
	
	cout<<"Enter the size of an Array :";
	scanf("%d",&sz);
	
	arr1 = new Array(sz);
	
	do
 	{
 		cout<<"\n\nMenu\n";
 		cout<<"1. Insert\n";
		cout<<"2. Delete\n";
		cout<<"3. Search\n";
		cout<<"4. Sum\n";
		cout<<"5. Display\n";
		cout<<"6.Exit\n";
		 
		cout<<"enter you choice ";
		cin>>ch;
		 
	switch(ch)
	{
		case 1: cout<<"Enter an element and index ";
	 			cin>>x>>index;
	 			arr1->Insert(index,x);
	 			break;
	 			
	 	case 2: cout<<"Enter index ";
	 			cin>>index;
	 			x=arr1->Deletion(index);
	 			cout<<"Deleted Element is"<<x;
	 			break;
	 			
	 	case 3: cout<<"Enter element to search ";
	 		    cin>>x;
	 			index=arr1->LinearSearch(x);
	 			cout<<"Element index "<<index;
	 			break;
	 			
	 	case 4: cout<<"Sum is "<<arr1->Sum();
	 			break;
	 			
	 	case 5:arr1->Display();
	}
	 
	}while(ch<6);

	
	return 0;
}
