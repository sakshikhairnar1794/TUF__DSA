// Print largest element in an array

#include <iostream>
using namespace std;

int largest(int a[], int n)
{
    int l = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > l)
        {
            l = a[i];
        }
    }
    return l;
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
    cout << "Largest  element is " << largest(a, n);
}