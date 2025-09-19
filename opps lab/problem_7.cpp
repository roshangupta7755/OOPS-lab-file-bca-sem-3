#include <iostream>
using namespace std;

int main() {
    int a, b, c, big;

    cout << "ENTER VALUE FOR A: ";
    cin >> a;
    cout << "ENTER VALUE FOR B: ";
    cin >> b;
    cout << "ENTER VALUE FOR C: ";
    cin >> c;

    big = a; // assume a is biggest initially

    if (b > big)
        big = b;
    if (c > big)
        big = c;

    cout << "BIGGEST OF ABOVE GIVEN THREE NUMBERS IS " << big << endl;

    return 0;
}
