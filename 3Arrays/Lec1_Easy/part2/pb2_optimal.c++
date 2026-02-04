// Reversing array by d places

#include <bits/stdc++.h>
using namespace std;

void leftrotatebyd(int a[], int n, int d)
{
    d = d % n;
    reverse(a, a + d);
    reverse(a + d, a + n);
    reverse(a, a + n);
}

int main()
{
    int n;
    cout << "Enter the no of array elements: " << endl;
    cin >> n;
    cout << "Enter the elements :" << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d;
    cout << "Enter the number of places by which the array is to be rotated: " << endl;
    cin >> d;
    leftrotatebyd(a, n, d);
    cout << "array after left rotate bu k position is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}