#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year (e.g. 2004): ";
    cin >> year;

    if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
        cout << "The year " << year << " is a leap year" << endl;
    else
        cout << "The year " << year << " is NOT a leap year" << endl;

    return 0;
}
