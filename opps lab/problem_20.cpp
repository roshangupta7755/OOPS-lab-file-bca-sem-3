#include <iostream>
using namespace std;

int main()
{
    int a[10][10], i, j, n;
    bool symmetric = true, skewSymmetric = true;

    cout << "Enter the size of square matrix: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Check symmetric and skew symmetric
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
                symmetric = false;

            if(a[i][j] != -a[j][i])
                skewSymmetric = false;
        }
    }

    cout << "\nThe given matrix is:\n";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    if(symmetric)
        cout << "The given matrix is Symmetric.\n";
    else if(skewSymmetric)
        cout << "The given matrix is Skew-Symmetric.\n";
    else
        cout << "The matrix is neither Symmetric nor Skew-Symmetric.\n";

    return 0;
}
