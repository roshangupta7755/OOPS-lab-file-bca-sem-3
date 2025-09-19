#include <iostream>
using namespace std;

int main() {
    int num, check_num;

    cout << "Enter the first number: ";
    cin >> num;

    cout << "Enter the second number: ";
    cin >> check_num;

    // check if num is multiple of check_num
    if (num % check_num == 0)
        cout << num << " is a multiple of " << check_num << endl;
    else
        cout << num << " is NOT a multiple of " << check_num << endl;

    return 0;
}
