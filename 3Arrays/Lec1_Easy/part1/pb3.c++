// remove duplicated from an array

#include <iostream>
using namespace std;

bool isSorted(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
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
    if (isSorted(a, n) == true)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
}