//Fibonacci series using recursion
#include<stdio.h>
#include<conio.h>

int fib(int n)
{
	static int n1=0, n2=1, n3;
	if(n > 0)
	{
		n3 = n1 +n2;
		n1 = n2;
		n2 = n3;
		printf(" %d ",n3);
		fib(n-1);
	}
}

int main()
{
	int n,result;
	
	printf("Enter n :\n");
	scanf("%d",&n);
	
	printf("fibonacci series :");
	printf("%d %d ",0,1);
	
	//n-2 because 2 no are already printed 
	fib(n-2);
	
	
	return 0;
}
