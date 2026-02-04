// using 2 variables or pointers
#include <bits/stdc++.h>
using namespace std;
void revarr1(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    revarr1(i + 1, arr, n);
}
int main()
{
    int n;

    cout << "Enter no of array elements: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    revarr1(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}