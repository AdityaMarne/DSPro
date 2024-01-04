//Taylor series (e^x) using recusrion
#include<stdio.h>
#include<conio.h>

int e(int x,int n)
{
	static int p = 1, f = 1;
	int r;
	
	if(n == 0)
	{
		return 1;
	}
	else
	{
		r = e(x,n-1);
		p = p * x;
		f = f * n;
		
		return r + p/f;
	}
}

int main()
{
	int x,n,result;
	
	printf("Enter x and n :\n");
	scanf("%d %d",&x,&n);
	
	result = e(x,n);
	printf("Result of Taylor series : %d",result);
	return 0;
}
