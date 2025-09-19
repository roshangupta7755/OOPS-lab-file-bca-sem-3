#include <iostream>
using namespace std;

int fact(int); // function declaration

int main()
{
    int num, result;
    cout << "Enter the required number: ";
    cin >> num;

    result = fact(num);

    cout << "Factorial is: " << result;
    return 0;
}

int fact(int n)
{
    int ft = 1; // initialize to 1
    for (; n >= 1; n--)
        ft = ft * n;
    return ft;
}
