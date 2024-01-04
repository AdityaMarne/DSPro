#include<stdio.h>
#include<conio.h>



//In this we find length of a string
void str_length(char str[])
{
	int i;
	for(i=0; str[i] != '\0'; i++)
	{
	}
	
	printf("\nLength of %s is = %d\n",A);
}

//In this we change the case of string character to lower case
void change_case_to_lower(char str[])
{
	int i;
	for(i=0; str[i] != '\0'; i++)
	{
		str[i] = str[i]	+ 32;
	}
	printf("Upper case lettres into lower case : %s\n",str);
}

//In this we change the case of string character to upper case
void change_case_to_upper(char str[])
{
	int i;
	for(i=0; str[i] != '\0'; i++)
	{
		str[i] = str[i]	- 32;
	}
	printf("Lower case lettres into upper case : %s\n",str);
}

//In this we change case from lower to upper or upper to lower
void case_change(char str[])
{
	int i;
	for(i=0; str[i] != '\0'; i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		else if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	printf("After changing the case of string is : %s\n",str);
}

//Counting vowels and consonents
void vowel_consonents(char str[])
{
	int i, vcount = 0, ccount = 0;
	for(i=0; str[i] != '\0'; i++)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
			str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'
			|| str[i] == 'U')
		{
			vcount++;		
		}
		else if(str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
		{
			ccount++;
		}
	}
	printf("Vowels count : %d\n",vcount);
	printf("Consonent count : %d\n",ccount);
}

//Counting words in a string
void counting_words(char str[])
{
	int i, word = 1;
	for(i=0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' && str[i-1] != ' ')
		{
			word++;
		}
	}
	printf("Word count is : %d\n",word);
}

//In this we check string is valid or not.
//Valid string doesn't not contain any special sumbol.
void valid(char str[])
{
	int i;
	for(i=0; str[i] != '\0'; i++)
	{
		if(!(str[i] >= 65 && str[i] <= 90) &&
		!(str[i] >= 97 && str[i] <= 122) &&
		!(str[i] >= 48 && str[i] <= 57) )
		{
			printf("In-Valid String\n");
			return;
		}
	}
	printf("Valid string\n");
}

//In this we are reversing a string
void reverse_str(char str[])
{
	char B[7];
	int i,j;
	for(i=0; str[i] != '\0'; i++){} //This loop take i at the position of \0 in the string.
	printf("%s\n",str[i]); //i is null
 	i = i-1;  //here we take i at str element which is behind the \0.
	for(j=0; i>=0; i--,j++)
	{
		B[j] = str[i];
	}
	B[j] = '\0';
	printf("Reverse of str is = %s\n",B);	
}

void reverse_str1(char str[])
{
	char temp;
	int i,j;

	for(j=0; str[j] != '\0'; j++)
	{
		
	}
	
	j = j-1;
	for(i=0; i<j; i++,j--)
	{
		temp= str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	printf("Reverse of str is = %s\n",str);
}

//In this we are comparing two strings are equal or not
void comparing_str(char str[])
{
	char B[] = "xyz";
	int i,j;
	
	for(i=0,j=0; str[i] != '\0', B[j] != '\0'; i++,j++)
	{
		if(str[i] != B[j])
		{
			printf("Strings are not equal\n");
			return;
		}
	}
	printf("Strings are equal\n");
}

//In this we are checking string is palindrome or not
void palindrome(char str[])
{
	int i,j;
	
	for(j=0; str[j] != '\0'; j++){}//This loop take j at the position of \0 in the string.
	printf("%s\n",str[j]); //j is null
 	
	j = j-1;  //here we take j at str element which is behind the \0.
	for(i=0, j>=0; str[i] != '\0'; i++,j--)
	{
		if(str[i] != str[j])
		{
			printf("Strings is not palindrome\n");
			return;
		}
	}
	printf("Strings is palindrome\n");
}
int main()
{	
	char str1[100];

	printf("\nEnter a string :\n");
	gets(str1);
	
	//str_length(str1);
	//change_case_to_lower(str1);
	//change_case_to_upper(str1);
	//case_change(str1);
	//vowel_consonents(str1);
	//counting_words(str1);
	//valid(str1);
	//reverse_str(str1);
	//reverse_str1(str1);
	//comparing_str(str1);
	//palindrome(str1);
	return 0;
}
