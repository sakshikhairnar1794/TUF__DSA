#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr, int n)
{
    int low = 0, high = n - 1;
    int ans = INT_MAX;

    while (low <= high)
    {
        // If current range is already sorted
        if (arr[low] <= arr[high])
        {
            ans = min(ans, arr[low]);
            break;
        }

        int mid = low + (high - low) / 2;

        // Left half is sorted
        if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        // Right half is sorted
        else
        {
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = findMin(arr, n);

    cout << ans << endl;

    return 0;
}