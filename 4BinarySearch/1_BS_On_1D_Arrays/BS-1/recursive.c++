#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &arr, int low, int high, int target)
{

    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (target > arr[mid])
    {
        return BinarySearch(arr, mid + 1, high, target);
    }
    else
    {
        return BinarySearch(arr, low, mid - 1, target);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (auto &x : arr)
    {
        cin >> x;
    }

    int target;
    cin >> target;

    cout << BinarySearch(arr, 0, n - 1, target);

    return 0;
}