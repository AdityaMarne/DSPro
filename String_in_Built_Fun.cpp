#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	
	char str1[30],str2[30];
	int l1,l2; 
	
	//Reading a string and finding its length using in-built function
	printf("Enter the string :");
	gets(str1);
	
	l1 = strlen(str1);  //l1 store length of str1
	printf("\nLength of %s = %d",str1,l1);
	
	//String copying in-built function
	strcpy(str2,str1);
	printf("\n 1st string = %s",str1);
	printf("\n 2nd string = %s",str2);
	
	//String copayring in-built function
	l1 = strcmp(str1,str2);
	printf("\nl1 = %d",l1);
	if(l1 == 0)
	{
		printf("\n str1 = str2");
	}
	else if(l1 > 0)
	{
		printf("\n str1 > str2");
	}
	else
	{
		printf("\n str1 < str2");
	}
	
	//String concatination in-built function
	strcat(str1,str2);
	printf("\n String after concatination = %s",str1);
	return 0;
}
