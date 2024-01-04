#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string str = "hsdghahiled";
	
	//convert into upper case
	for(int i=0; i<str.size(); i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	cout<<str<<endl;
	
	//convert into lower case
	for(int i=0; i<str.size(); i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	cout<<str<<endl; 
	
	//convert into upper case using upper case
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	cout<<str<<endl;
	
	//convert into lower case using upper case
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout<<str<<endl;
	return 0;
}

