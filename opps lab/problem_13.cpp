#include<iostream>
using namespace std;

int main()
{
    int a, b, hcf, lcm;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Euclidean Algorithm for HCF
    int x = a, y = b;
    while(y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;

    // LCM formula
    lcm = (a * b) / hcf;

    cout << "\nLCM = " << lcm << "\nHCF = " << hcf;
    return 0;
}
