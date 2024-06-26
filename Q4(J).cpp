#include <iostream>
using namespace std;

char* SubStr(char* str, int pos, int len);

int main() {
    char arr1[500];

    cout << "Enter a string S1: " << endl;
    cin.getline(arr1, 500);
    char* str = arr1;

    int p;
    cout << "Enter position: " << endl;
    cin >> p;

    int l;
    cout << "Enter length: " << endl;
    cin >> l;

    char* pointer = SubStr(str, p, l);
    cout << pointer << endl;
    delete[] pointer;
    return 0;
}


char* SubStr(char* str, int pos, int len)  {
    if (str == nullptr || pos < 0 || len < 0) {
        return nullptr;
    }

    char* substr = new char[len + 1];
    int i = pos, j = 0;
    while (i < pos + len && str[i] != '\0') {
        substr[j] = str[i];
        i++;
        j++;
    }
    substr[j] = '\0';
    return substr;
}