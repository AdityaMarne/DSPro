#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Term
{
	int coeff;
	int exp;
};

struct Poly
{
	int n;
	struct Term *terms;
};

void create(struct Poly *p)
{
	printf("Number of terms :\n");
	scanf("%d",p->n);
	
	p->terms = (struct Term*)malloc(p->n * sizeof(struct Term));
	
	printf("Enter terms :");
	for(int i=0; i<p->n; i++)
	{
		scanf("%d%d",&p->terms[i].coeff,&p->terms[i].exp);
	}
}

void display(struct Poly p)
{
	for(int i=0; i<p.n; i++)
	{
		printf("%dx%d+",p.terms[i].coeff,p.terms[i].exp);
		printf("\n");
	}
}
struct Poly *add(struct Poly *p1,struct Poly *p2)
{
	struct Poly *sum;
	
	sum = (struct Poly*)malloc(sizeof(struct Poly));
	
	sum->terms = (struct Term*)malloc((p1->n + p2->n)*sizeof(struct Term));
	 
	int i,j,k;
	i=j=k=0;
	
	while(i < p1->n && j < p2->n)
	{
		if(p1->terms[i].exp > p2->terms[j].exp)
		{
			sum->terms[k] = p1->terms[i];
			k++;i++;
		}
		else if(p1->terms[i].exp < p2->terms[j].exp)
		{
			sum->terms[k] = p1->terms[j];
			k++;j++;
		}else{
			sum->terms[k].exp = p1->terms[i].exp;
			sum->terms[k].coeff = p1->terms[i].coeff + p2->terms[j].coeff;
			k++;i++;j++;
		}
	}
	for( ;i < p1->n; i++)sum->terms[k++]=p1->terms[i];
	for( ;j < p2->n; j++)sum->terms[k++]=p2->terms[j];
	
	sum->n = k;
	return sum;
}
int main()
{
	struct Poly p1,p2,*p3;
	
	create(&p1);
	create(&p2);
	p3 = add(&p1,&p2);
	
	printf("\n");
	display(p1);
	printf("\n");
	display(p2);
	printf("\n");
	display(*p3);
	return 0;
}
