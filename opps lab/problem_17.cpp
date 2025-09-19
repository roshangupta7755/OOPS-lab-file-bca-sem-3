#include<iostream>
using namespace std;

// Binary Search Function
int search(int a[], int n, int e)
{
    int f, l, m;
    f = 0;
    l = n - 1;

    while (f <= l)
    {
        m = (f + l) / 2;   // mid position

        if (e == a[m])
            return m;      // element mil gaya, index return
        else if (e > a[m])
            f = m + 1;     // right half me search
        else
            l = m - 1;     // left half me search
    }
    return -1;             // agar element nahi mila
}

int main()
{
    int n, i, a[100], e, res;

    cout << "How Many Elements: ";
    cin >> n;

    cout << "\nEnter Elements of Array in Ascending order\n";
    for (i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cout << "\nEnter element to search: ";
    cin >> e;

    res = search(a, n, e);

    if (res != -1)
        cout << "\nElement is Found at " << res + 1 << " position";
    else
        cout << "\nElement is not found....!!!";

    return 0;
}
