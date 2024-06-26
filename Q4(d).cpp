#include<iostream>
using namespace std;

char* strcat (char* s1, const char* s2, int n);

int main ()
{
    int length;
    char arr1[500];
    char arr2[500];

    cout<<"Enter a string S1 :"<<endl;
    cin.getline(arr1,500);
    cout<<"Enter a string S2 :"<<endl;
    cin.getline(arr2,500);
    char* s1 = arr1;
    const char* s2 = arr2;
	int n;
	cout<<"Enter value"<<endl;
	cin>>n;
    s1 = strcat(s1, s2, n);
    
    cout<<"The combined array is: "<<endl;
    cout<<s1;

    return 0;
}

char* strcat (char* s1, const char* s2, int n)
{
	
    int y = 0;
    int i = 0;
    int k = 0;
    int l = 0;
    
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
    
    int p = y + l;

    for(int a = 0; a < p+1; a++)
    {
        s1[n+a] = s2[a];
    }
    
    return s1;
}