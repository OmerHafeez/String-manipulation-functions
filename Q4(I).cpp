#include<iostream>
using namespace std;
int StrFind(char *s1, char *s2);
int main() {
     char arr1[500];
    char arr2[500];

    cout<<"Enter a string S1 :"<<endl;
    cin.getline(arr1,500);
    cout<<"Enter a string S2 :"<<endl;
    cin.getline(arr2,500);
    char* s1 = arr1;
    char* s2 = arr2;
    int i=StrFind(s1,s2);
    cout<<i;
}

int StrFind(char *s1, char *s2)
{
    int len1 = 0;
    int len2 = 0;

    
    while (s1[len1] != '\0') {
        len1++;
    }

    while (s2[len2] != '\0') {
        len2++;
    }

    
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (i == j) {
                continue;
            }
            if (s1[i] == s2[j]) {
                return i;
            }
        }
    }

    // if no match is found
    return -1;
}
