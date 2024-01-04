#include<stdio.h>

//Here we represent Symmetric matrix.

int symmetry(int a[][10],int m)
{
	int i,j;
	for(i=1; i<m; i++)
	{
		for(j=0; j<i; j++)
		{
			if(a[i][j] != a[j][i])
				return 0;
		}
	}
	return 1;
}

int main()
{
	int a[10][10],m,i,j;
	/*
	Acual size of matrix is m*n
	i,j for scanning of array
	temp for interchanging of a[i][j] and a[j][i]
	*/
	
	printf("Enter the size of matrix :");
	scanf("%d",&m);
	
	/*Reading elements of matrix*/
	printf("\nEnter the values a :");
	for(i=0; i<m; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	int result = symmetry(a,m);
	
	if(result == 0)
	{
		printf("\nNot symmetric");
	}else{
		printf("\nSymmetrical");
	}
	
	return 0;
}
