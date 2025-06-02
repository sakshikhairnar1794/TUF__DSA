// using 2 variables or pointers
#include <bits/stdc++.h>
using namespace std;
void revarr1(int l, int arr[], int r)
{
    if (l >= r)
    {
        return;
    }
    swap(arr[l], arr[r]);
    revarr1(l + 1, arr, r - 1);
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
    revarr1(0, arr, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}