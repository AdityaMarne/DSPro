#include<stdio.h>
#include<conio.h>
//Sparse matrix

struct Element
{
	int i;
	int j;
	int x;
};

struct Sparse
{
	int m; //row
	int n; //column
	int num; //non-zero element
	struct Element *e;
};

void create(struct Sparse *s)
{
	printf("Enter Dimentions :\n");
	scanf("%d%d",&s->m,&s->n);
	
	printf("Enter non-zero elements :\n");
	scanf("%d",&s->num);
	
	s->e = new Element[s->num];
	printf("Enter all elements :\n");
	for(int i=0; i<s->num; i++)
	{
		scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
	}
}

int add(struct Sparse *s1,struct Sparse *s2)
{
	struct Sparse *sum;
	int i,j,k;
	
	if(s1->m != s2->m || s1->n != s2->n)
	{
		return 0;
	}
	
	sum = new Sparse;
	sum->m = s1->m;
	sum->n = s1->n;
	
	sum->e = new Element[s1->num + s2->num];
	
	while(i < s1->num && j < s2->num)
	{
		if(s1->e[i].i < s2->e[j].i)
		{
			sum->e[k] = s1->e[i];
			k++;
			i++;
		}else if(s1->e[i].i > s2->e[j].i){
			sum->e[k] = s2->e[j];
			k++;
			j++;
		}else{
			if(s1->e[i].j < s2->e[j].i){
				sum->e[k] = s1->e[i];
				k++;i++;
			}else if(s1->e[i].j > s2->e[j].j){
				sum->e[k] = s2->e[j];
				k++;j++;
			}else{
				sum->e[k] = s1->e[i];
				k++;i++;
				sum->e[k] = s2->e[j];
				k++;j++;
			}
		}
	}
}

int main()
{
	struct Sparse s1,s2;
	create(&s1);
	create(&s2);
	
	add(&s1,&s2);
		
	return 0;
}
