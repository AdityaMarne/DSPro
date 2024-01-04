
#include<stdio.h>

void read(int x[][10],int r,int c)
{
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
}

void print(int x[][10],int r,int c)
{
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
}

void add(int x[][10],int y[][10],int res[][10],int r,int c)
{
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			res[i][j] = x[i][j] + y[i][j];
		}
		printf("\n");
	}
}

int main()
{
	int r,c,a[10][10],b[10][10],sum[10][10],i,j,res[10][10];
	
	printf("Enter the no. of rows(between 1 to 10) :");
	scanf("%d",&r);
	
	printf("\nEnter the no. of columns(between 1 to 10) :");
	scanf("%d",&c);
	
	printf("\nEnter the elements of 1'st matrix :\n");
	read(a,r,c);
	printf("\nEnter the elements of 2'nd matrix :\n");
	read(b,r,c);
	
	printf("\n1'st Matrix is :\n");
	print(a,r,c);
	printf("\n2'nd Matrix is :\n");
	print(b,r,c);
	
	add(a,b,res,r,c);
	//Printing the result
	printf("Sum of two matirx :\n");
	print(res,r,c);
	
 	
	return 0;
} 
