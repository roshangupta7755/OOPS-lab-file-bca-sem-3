#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int frst = 0, sec = 1, t, n, ct;
    cout << "Enter the no. of terms: ";
    cin >> n;

    cout << "Fibonacci series: ";
    cout << frst << " " << sec << " ";   // Pehle do terms (0 aur 1) print

    for (ct = 3; ct <= n; ct++)          // 3rd term se loop start
    {
        t = frst + sec;                  // Pehle do numbers ka sum = next term
        cout << t << " ";                // Next term print
        frst = sec;                      // Update (shift values)
        sec = t;
    }
    return 0;
}
