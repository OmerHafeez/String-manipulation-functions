#include<iostream>
using namespace std;
int compare_strings(const char* s1, const char* s2) ;
int main() {
     char arr1[500];
    char arr2[500];

    cout<<"Enter a string S1 :"<<endl;
    cin.getline(arr1,500);
    cout<<"Enter a string S2 :"<<endl;
    cin.getline(arr2,500);
    char* s1 = arr1;
    char* s2 = arr2;
    int cmp = compare_strings(s1, s2);
    if (cmp == 0) {
        cout<<"The strings are equal";
    } else if (cmp < 0) {
        cout<<"s1 is greater than s2";
    } else {
        cout<<"s1 is smaller than s2";
    }
}


int compare_strings(const char* s1, const char* s2) 
	{
  while ( *s1 == *s2) 
  {
    s1++;
    s2++;
  }
  int cmp= (*s1 - *s2);
  cout<<cmp<<endl;
  if (cmp == 0) {
        return 0;
    } else if (cmp < 0) {
        return -1;
    } else {
        return 1;
    }
}