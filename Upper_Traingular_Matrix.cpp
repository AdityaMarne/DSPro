#include<stdio.h>
#include<stdlib.h>
//Here we represent upper traingulat matrix using row majour and column majour formula.

struct Matrix
{
	int *A;
	int n;
};

//Here we use row majour formula for setting upper trainguler matrix value.
void Set_Row_Majour(struct Matrix *m, int i, int j, int x)
{
	if(i <= j)
	{
		m->A[(i-1)*m->n - (i-2)*(i-1)/2 + (j-i)] = x; 
	}
}

//Here we use row majour formula for getting upper trainguler matrix value.
int Get_Row_Majour(struct Matrix m, int i, int j)
{
	if(i <= j)
	{
		return m.A[(i-1)*m.n - (i-2)*(i-1)/2 + (j-i)]; 
	}else{
		return 0;
	}
}

//Here we use column majour formula for setting upper trainguler matrix value.
void Set_Column_Majour(struct Matrix *m, int i, int j, int x)
{
	if(i <= j)
	{
		m->A[j * (j-1) / 2 + (i-1)] = x; 
	}
}

//Here we use column majour formula for getting upper trainguler matrix value.
int Get_Column_Majour(struct Matrix m, int i, int j)
{
	if(i <= j)
	{
		return m.A[j * (j-1) / 2 + (i-1)]; 
	}else{
		return 0;
	}
}

void Display(struct Matrix m)
{
	int i,j;
	for(i=1; i<=m.n; i++)
	{
		for(j=1; j<=m.n; j++)
		{
			if(i <= j)
			{
				printf("%d ",m.A[j * (j-1) / 2 + (i-1)]);
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
	
	printf("Enter matrix size :\n");
	scanf("%d",&m.n);
	
	m.A = new int[m.n];
	
	printf("\nEnter an elements :\n");
	for(int i=1; i<=m.n; i++)
	{
		for(int j=1; j<=m.n; j++)
		{
			scanf("%d",&x);
			Set_Column_Majour(&m,i,j,x);	
		}
	}
	printf("\n");
	Display(m);
	
	
	return 0;
}
