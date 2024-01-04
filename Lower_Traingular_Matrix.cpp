#include<stdio.h>
#include<stdlib.h>
//Here we represent lower traingulat matrix using row majour and column majour formula.

struct Matrix
{
	int *A;
	int n;
};

//Here we use row majour formula for setting lower trainguler matrix value.
void Set_Row_Majour(struct Matrix *m,int i,int j,int x)
{
	if(i >= j)
	{
		m->A[i * (i-1) / 2 + j - 1] = x;
	}
}

//Here we use row majour formula for setting lower trainguler matrix value.
int Get_Row_Majour(struct Matrix m,int i,int j)
{
	if(i >= j)
	{
		return m.A[i * (i-1) / 2 + j - 1];
	}else{
		return 0;
	}
}

//Here we use column majour formula for setting lower trainguler matrix value.
void Set_Column_Majour(struct Matrix *m,int i,int j,int x)
{
	if(i >= j)
	{
		m->A[m->n * (j-1) + (j-2) * (j-1) / 2+i-j] = x;
	}
}

//Here we use column majour formula for setting lower trainguler matrix value.
int Get_Column_Majour(struct Matrix m,int i,int j)
{
	if(i >= j)
	{
		return m.A[m.n * (j-1) + (j-2) * (j-1) / 2+i-j];
	}else{
		return 0;
	}
}

//Here we display matrix for row majour
void Display_Row_Majour(struct Matrix m)
{
	for(int i=1; i<=m.n; i++)
	{
		for(int j=1; j<=m.n; j++)
		{
			if(i >= j)
			{
				printf("%d ",m.A[i * (i-1) / 2 + j -1]);
			}else{
				printf("0 ");
		}
	}
		printf("\n");
	}
}

//Here we display matrix for column majour
void Display_Column_Majour(struct Matrix m)
{
	for(int i=1; i<=m.n; i++)
	{
		for(int j=1; j<=m.n; j++)
		{
			if(i >= j)
			{
				printf("%d ",m.A[m.n * (j-1) + (j-2) * (j-1) / 2+i-j]);
			}else{
				printf("0 ");
		}
	}
		printf("\n");
	}
}

int main()
{
	struct Matrix m;
	int x;
	
	printf("Enter Dimension :\n");
	scanf("%d",&m.n);
	
	m.A =(int *)malloc(m.n*(m.n-1)/2*sizeof(int));
	
	printf("Enter all an elements :\n");
	for(int i=1; i<=m.n; i++)
	{
		for(int j=1; j<=m.n; j++)
		{
			scanf("%d",&x);
			Set_Row_Majour(&m,i,j,x);
		}
	}
	printf("\n");
	Display_Column_Majour(m);
	return 0;
}
