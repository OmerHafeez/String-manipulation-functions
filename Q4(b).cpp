#include<iostream>
using namespace std;
char* strncpy (char *s1, const char* s2);
int main ()
{
	int length;
	char arr1[500];
	char arr2[500];

	cout<<"Enter a sting:"<<endl;

	cin.getline(arr2,500);
	char* s1=arr1;
	char* s2=arr2;
	cout<<s2;
	int n=0;
	int i=0;
	while(s2[i]!='\0')
	{
		n++;
		i++;
	}
	s1=strncpy(s1, s2, 500);
	
	for(int i=0;i<'\0';i++)
	cout<<"S1 will be "<<s1;
}

char* strncpy (char *s1, const char* s2,int n)
{
	
	
	for(int i=0;i<n;i++)
	{
		s1[i]=s2[i];
	}
	
	return s1;
}