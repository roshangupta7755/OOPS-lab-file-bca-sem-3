#include <iostream>
using namespace std;

int main() {
    int i, n, s = 0;

    cout << "Enter the number: ";
    cin >> n;

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            s += i;
    }

    if (s == n)
        cout << "The number " << n << " is a Perfect Number" << endl;
    else
        cout << "The number " << n << " is NOT a Perfect Number" << endl;

    return 0;
}
