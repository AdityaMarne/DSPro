#include<stdio.h>
#include<conio.h>

void readmatrix(int x[10][10],int m,int n)
{
	printf("Enter elements of matix :\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
}

void TwoD_sparse(int a[10][10],int m,int n,int b[10][3])
{
	/*
	i,j -> index for 2D matrix
	k -> index for matrix in sparse form
	*/
	int i,j,k;
	k=1;
	b[0][0] = m; b[0][1] = n;
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<m; j++)
		{
			if(a[i][j] != 0)
			{
				b[k][0] = i;
				b[k][1] = j;
				b[k][2] = a[i][j];
				k++;
			}
		}
	}
	b[0][2] = k-1;
}

void printsparse(int b[20][3])
{
	int i,n;
	n = b[0][2]; //Number of 3-triples
	printf("\nrows = %d\t columns = %d",b[0][0],b[0][1]);
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t%d\t%d\n",b[i][0],b[i][1],b[i][2]);
	}
}

int main()
{
	/*
	a is 2d form of sparse matrix
	b is a spaerse matrix.
	m,n is row and column
	*/
	int a[10][10],b[20][3],m,n; 
	
	printf("Enter the size of matrix(row,column) :\n");
	scanf("%d%d",&m,&n);
	readmatrix(a,m,n);
	TwoD_sparse(a,m,n,b);
	
	printsparse(b);
	return 0;
}
