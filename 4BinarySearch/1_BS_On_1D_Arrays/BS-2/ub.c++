// Using Lower Bound

#include <bits/stdc++.h>
using namespace std;

int LB(vector<int> &arr, int x)
{
    int low = 0, high = arr.size() - 1;
    int ans = arr.size();

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int UB(vector<int> &arr, int x)
{
    int low = 0, high = arr.size() - 1;
    int ans = arr.size();

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
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

    int first = LB(arr, target);

    if (first == n || arr[first] != target)
    {
        cout << "-1 -1";
        return 0;
    }

    int last = UB(arr, target) - 1;

    cout << first << " " << last;

    return 0;
}