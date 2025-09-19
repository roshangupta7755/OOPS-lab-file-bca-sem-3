#include<iostream>
using namespace std;

int main()
{
    int m, n, c, d;
    int first[10][10], second[10][10], sum[10][10];

    cout << "Enter the number of rows and columns of matrix: ";
    cin >> m >> n;

    // Input first matrix
    cout << "Enter the elements of first matrix\n";
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            cin >> first[c][d];

    // Input second matrix
    cout << "Enter the elements of second matrix\n";
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            cin >> second[c][d];

    // Addition of two matrices
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            sum[c][d] = first[c][d] + second[c][d];

    // Print result
    cout << "Sum of entered matrices:-\n";
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
            cout << sum[c][d] << "\t";
        cout << endl;
    }

    return 0;
}
