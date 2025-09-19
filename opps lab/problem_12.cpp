#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i, j, len, flag = 1;
    char a[20];

    cout << "Enter a string: ";
    cin >> a;

    // String length nikalna
    for(len = 0; a[len] != '\0'; ++len);

    // Palindrome check (start aur end se compare)
    for(i = 0, j = len-1; i < len/2; ++i, --j)
    {
        if(a[j] != a[i])
            flag = 0;   // mismatch mil gaya
    }

    if(flag == 1)
        cout << "\nThe string is Palindrome";
    else
        cout << "\nThe string is not Palindrome";

    return 0;
}
