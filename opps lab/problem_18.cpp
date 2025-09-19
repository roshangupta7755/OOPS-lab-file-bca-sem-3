#include<iostream>
using namespace std;

int main()
{
    int i, j, n, loc, temp, min, a[30];

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "\nEnter the elements\n";
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Selection Sort
    for(i = 0; i < n-1; i++)
    {
        min = a[i];
        loc = i;

        // Find minimum element in remaining array
        for(j = i+1; j < n; j++)
        {
            if(min > a[j])
            {
                min = a[j];
                loc = j;
            }
        }

        // Swap
        temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }

    cout << "\nSorted list is as follows\n";
    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
