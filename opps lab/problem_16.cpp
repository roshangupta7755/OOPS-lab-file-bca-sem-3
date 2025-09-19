#include<iostream>
using namespace std;

int main()
{
    int a[20], n, x, i, flag = 0;

    cout << "How many Elements? ";
    cin >> n;

    cout << "\nEnter Elements of the Array\n";
    for(i = 0; i < n; ++i)
        cin >> a[i];

    cout << "\nEnter Element to search: ";
    cin >> x;

    // Linear Search
    for(i = 0; i < n; ++i)
    {
        if(a[i] == x)
        {
            flag = 1;   // element mil gaya
            break;      // loop ko yahin rok dete hain
        }
    }

    if(flag)
        cout << "\nElement is Found at position " << i+1;  // i+1 kyunki position 1-based hai
    else
        cout << "\nElement not found";

    return 0;
}
