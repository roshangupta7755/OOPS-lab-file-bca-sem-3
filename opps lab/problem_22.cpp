#include <iostream>
#include <cstdlib> // exit(0) के लिए
using namespace std;

class demo {
    float a, b;
public:
    void getdata();
    void display();
    demo operator +(demo);
    demo operator -(demo);
    demo operator *(demo);
    demo operator /(demo);
    bool operator ==(demo);
};

void demo::getdata() {
    cout << "Enter values of a and b: ";
    cin >> a >> b;
}

void demo::display() {
    cout << "a = " << a << "\tb = " << b << endl;
}

demo demo::operator +(demo d1) {
    demo d2;
    d2.a = a + d1.a;
    d2.b = b + d1.b;
    return d2;
}

demo demo::operator -(demo d1) {
    demo d2;
    d2.a = a - d1.a;
    d2.b = b - d1.b;
    return d2;
}

demo demo::operator *(demo d1) {
    demo d2;
    d2.a = a * d1.a;
    d2.b = b * d1.b;
    return d2;
}

demo demo::operator /(demo d1) {
    demo d2;
    d2.a = a / d1.a;
    d2.b = b / d1.b;
    return d2;
}

bool demo::operator ==(demo d1) {
    return (a == d1.a && b == d1.b);
}

int main() {
    int ch;
    demo d1, d2, d3;

    cout << "First Object:\n";
    d1.getdata();

    cout << "\nSecond Object:\n";
    d2.getdata();

    while (true) {
        cout << "\n\n--- Operator Overloading Menu ---";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Comparison";
        cout << "\n6. Exit";
        cout << "\nEnter your choice (1-6): ";
        cin >> ch;

        switch (ch) {
            case 1:
                d3 = d1 + d2;
                cout << "\nResult (Third Object):\n";
                d3.display();
                break;
            case 2:
                d3 = d1 - d2;
                cout << "\nResult (Third Object):\n";
                d3.display();
                break;
            case 3:
                d3 = d1 * d2;
                cout << "\nResult (Third Object):\n";
                d3.display();
                break;
            case 4:
                d3 = d1 / d2;
                cout << "\nResult (Third Object):\n";
                d3.display();
                break;
            case 5:
                if (d1 == d2)
                    cout << "\nObjects are Equal\n";
                else
                    cout << "\nObjects are Not Equal\n";
                break;
            case 6:
                exit(0);
            default:
                cout << "\nWrong Choice! Try again.\n";
        }
    }

    return 0;
}
