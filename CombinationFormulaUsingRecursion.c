//Combination formula using recursion
#include<stdio.h>
#include<conio.h>

int fact(n)
{
	if(n <= 1)
	{
		return 1;
	}
	else
	{
		return fact(n-1) * n;
	}
}

int combination(int n, int r)
{
	int t1,t2,t3;
	t1 = fact(n);
	t2 = fact(r);
	t3 = fact(n-r);
	 
	return t1/(t2 * t3);
}

int main()
{
	int n,r,result;
	
	printf("Enter n and r :\n");
	scanf("%d %d",&n,&r);
	
	result = combination(n,r);
	printf("Combination result = %d",result);
	return 0;
}
