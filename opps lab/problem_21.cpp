#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // full line input (with spaces)

    // Convert to uppercase
    string upperStr = str;
    for (int i = 0; i < upperStr.length(); i++) {
        if (upperStr[i] >= 'a' && upperStr[i] <= 'z') {
            upperStr[i] = upperStr[i] - 32; // lowercase → uppercase
        }
    }

    // Convert to lowercase
    string lowerStr = str;
    for (int i = 0; i < lowerStr.length(); i++) {
        if (lowerStr[i] >= 'A' && lowerStr[i] <= 'Z') {
            lowerStr[i] = lowerStr[i] + 32; // uppercase → lowercase
        }
    }

    cout << "\nOriginal String: " << str;
    cout << "\nUppercase String: " << upperStr;
    cout << "\nLowercase String: " << lowerStr;

    return 0;
}
