//Sum of natural number using recursion
#include<stdio.h>
#include<conio.h>

int sum(int n)
{
	if(n == 0)
		return 0;
	return sum(n-1)+n;
}

int main()
{
	int num;
	
	printf("Enter a number :");
	scanf("%d",&num);
	
	printf("Sum = %d",sum(num));
	return 0;
	
}
