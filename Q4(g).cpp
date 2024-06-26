#include<iostream>
using namespace std;
int StrnCmp(const char *s1, const char *s2, int n);
int main() {
     char arr1[500];
    char arr2[500];

    cout<<"Enter a string S1 :"<<endl;
    cin.getline(arr1,500);
    cout<<"Enter a string S2 :"<<endl;
    cin.getline(arr2,500);
    char* s1 = arr1;
    char* s2 = arr2;
    int n;
	cout<<"Enter index"<<endl;
    cin>>n;
    int cmp = strncmp(s1, s2,n);
    if (cmp == 0) {
        cout<<"The strings are equal";
    } else if (cmp < 0) {
        cout<<"s1 is greater than s2";
    } else {
        cout<<"s1 is smaller than s2";
    }
}

int StrnCmp(const char *s1, const char *s2, int n) 
{
int i = 0;
  while (i<n && *s1 == *s2) 
	{
    s1++;
    s2++;
    i++;
	}
  return *s1 - *s2;
}