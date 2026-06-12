#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr, int n)
{
    int low = 0, high = n - 1;
    int ans = INT_MAX;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        ans = min(ans, arr[mid]);

        // Duplicates: shrink search space
        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            ans = min(ans, arr[low]);
            low++;
            high--;
        }
        // Left half sorted
        else if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        // Right half sorted
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

    cout << findMin(arr, n) << endl;

    return 0;
}