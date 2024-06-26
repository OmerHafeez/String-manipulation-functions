#include<iostream>
using namespace std;
int strlen (char *arr);
int main ()
{
	int length;
	char arr[100];
	cout<<"Enter a sting:"<<endl;
//	cin>>arr;
	cin.getline(arr,100);
	
	length= strlen(arr);
	cout<<length<<" are the numbers of lenght";
	
}

int strlen (char* arr)
{
	int count=0;
	int i=0;
	while(arr[i]!='\0')
	{
		count++;
		i++;
	}
	
	return count;
}