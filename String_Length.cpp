#include<stdio.h>
#include<conio.h>

void str_length(char str[])
{
	int i;
	for(i=0; str[i] != '\0'; i++)
	{
	}
	
	printf("\nLength of %s is = %d",str,i);
}

int main()
{
	int n,l,i;
	char str1[100];
	
	printf("\nEnter a string :");
	gets(str1);
	
	str_length(str1);
	return 0;
}
