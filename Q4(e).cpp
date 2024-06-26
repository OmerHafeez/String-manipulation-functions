#include<iostream>
using namespace std;
int StrCmp( const char *s1, const char *s2 );
int main ()
{
	int length;
	char arr1[100];
	char arr2[100];
	cout<<"Enter a sting S1:"<<endl;
	cin.getline(arr1,100);
	cout<<"Enter a sting S1:"<<endl;
	cin.getline(arr1,100);
	char* s1=arr1;
	char* s2=arr2;
	strCmp(s1, s2);
	
	
}

int StrCmp( const char *s1, const char *s2 )
{
	int i=0;
	int k=0;
	while(s1[i] != '\0')
    {
        y++;
        i++;
    }

    while(s2[k] != '\0' && k < n-1)
    {
        l++;
        k++;
    }
	
	for(int i=0;i<l&&i<y,i++)
	{
	
	if (*s1[i] == *s2[i]) 
	{
        cout<< 0;
    }
	else if (*s1[i] < *s2[i]) 
	{
        return -1;
    }
	else 
	{
        return 1;
    }
	}
	
	
}