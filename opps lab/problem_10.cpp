#include <iostream>
using namespace std;

int main() {
    int n, i, flag = 1;

    cout << "Enter any number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is NOT a Prime number" << endl;
        return 0;
    }

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << n << " is a Prime number" << endl;
    else
        cout << n << " is NOT a Prime number" << endl;

    return 0;
}
