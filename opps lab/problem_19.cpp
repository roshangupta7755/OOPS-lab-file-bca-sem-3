#include<iostream>
using namespace std;

int main()
{
    int i, j, n, temp, a[30];

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "\nEnter the elements\n";
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Insertion Sort
    for(i = 1; i <= n-1; i++)
    {
        temp = a[i];   // current element
        j = i - 1;

        // elements ko shift karo jab tak unse bada element milta hai
        while((temp < a[j]) && (j >= 0))
        {
            a[j+1] = a[j];  // move element forward
            j = j - 1;
        }
        a[j+1] = temp;  // element ko correct position pe insert karo
    }

    cout << "\nSorted list is as follows\n";
    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
