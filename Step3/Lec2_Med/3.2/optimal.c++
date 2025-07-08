// sort an array of 0's 1's and 2's
#include <bits/stdc++.h>
using namespace std;

void sortarrayof012(vector<int> &arr, int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number of array elements" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements (only 0,1,2) :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sortarrayof012(arr, n);
    cout << "sorted array is :" << endl;
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
