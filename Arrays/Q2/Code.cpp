#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int maximum_element(int A[], int n)
{
    int key = A[0], c;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > key)
        {
            c = A[i];
        }
    }
    return c;
}
int minimum_element(int A[], int n)
{
    int key = A[0], m;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < key)
        {
            key = A[i];
        }
    }
    return key;
}
int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int a[n];

    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Minimum element=" << minimum_element(a, n) << endl;
    cout << "maximum element=" << maximum_element(a, n) << endl;
    // cout << "Elements of the array in reverse order are:-\n";
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << a[i] << endl;
    // }
    return 0;
}
