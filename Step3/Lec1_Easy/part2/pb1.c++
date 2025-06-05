// Left Rotate array by 1 place

#include <iostream>
using namespace std;

void leftrotate(int a[], int n)
{
    int temp = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
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
    leftrotate(a, n);
    cout << "array after left rotate is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}