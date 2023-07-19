//Power of number using recursion
#include<stdio.h>
#include<conio.h>

int pow(int m,int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return pow(m,n-1)*m;
	}
}

int pow2(int m,int n)
{
	if(n == 0)
	{
		return 0;
	}
	if(n % 2 == 0)
	{
		return pow(m*m,n/2);
	}
	else{
		return m * pow(m*m,(n-1)/2);
	}
}

int main()
{
	int m,n,power;
	
	printf("Enter m and n :\n");
	scanf("%d %d",&m,&n);
	
	power = pow2(m,n);
	printf("power of %d and %d : %d",m,n,power);
	
	return 0;
}
