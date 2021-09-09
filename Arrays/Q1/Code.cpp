#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

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
    cout << "Elements of the array in reverse order are:-\n";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << endl;
    }
    return 0;
}
