//Factorial of n number using recursion
#include<stdio.h>
#include<conio.h>

int fact(int n)
{
	if(n == 0)
	{
		return 1;
	}
	else if( n == 1)
	{
		return 1;
	}	
	else
	{
		return fact(n-1)*n;	
	}
}

int main()
{
	int num;
	
	printf("Enter a number :");
	scanf("%d",&num);
	
	printf("Factorial = %d",fact(num));
	return 0;
}
