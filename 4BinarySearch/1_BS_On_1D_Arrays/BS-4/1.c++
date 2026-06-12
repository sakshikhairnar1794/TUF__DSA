// Search element in Rotated Sorted Array

#include <bits/stdc++.h>
using namespace std;

int Search(vector<int> &arr, int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
            return mid;

        // Left half is sorted
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= k && k < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right half is sorted
        else
        {
            if (arr[mid] < k && k <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (auto &x : arr)
        cin >> x;

    int target;
    cin >> target;

    int ans = Search(arr, n, target);

    if (ans == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index: " << ans << "\n";

    return 0;
}