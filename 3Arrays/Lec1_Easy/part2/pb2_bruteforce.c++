// Reversing array by d places

#include <iostream>
using namespace std;

void leftrotatebyd(int a[], int n, int d)
{
    int temp[d];
    d = d % n;
    for (int i = 0; i < d; i++)
    {
        temp[i] = a[i];
    }

    for (int i = d; i < n; i++)
    {
        a[i - d] = a[i];
    }
    for (int i = n - d; i < n; i++)
    {
        a[i] = temp[i - (n - d)];
    }
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