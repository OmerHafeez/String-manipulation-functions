#include<iostream>
using namespace std;

char **StrTok(char *s1, const char s2);

int main()
{
    char arr1[500];
    char c;

    cout << "Enter a string S1: " << endl;
    cin.getline(arr1, 500);

    cout << "Enter a character: " << endl;
    cin >> c;

    char* s1 = arr1;
    char** pointer = StrTok(s1, c);

    for (int i = 0; pointer[i] != nullptr; i++) 
    {
        cout << pointer[i] << endl;
        delete[] pointer[i];
    }

    delete[] pointer;
}

char **StrTok(char *s1, const char s2)
{
    int i = 0;
    int j = 0;
    int mod = 0;
    char **set = new char*[500];

    while (s1[i] != '\0') 
    {
        char *check = new char[500];
        j = 0;

        while (s1[i] != '\0' && s1[i] != s2) 
        {
            check[j] = s1[i];
            i++;
            j++;
        }

        check[j] = '\0';

        if (j > 0) 
        {
            set[mod] = check;
            mod++;
        } 
        else 
        {
            delete[] check;
        }

        i++;
    }

    set[mod] = nullptr;

    return set;
}
