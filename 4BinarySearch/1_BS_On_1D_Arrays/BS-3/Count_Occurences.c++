#include <bits/stdc++.h>
using namespace std;

int FirstOccurence(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return first;
}

int LastOccurence(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return last;
}

int CountOccurences(vector<int> &arr, int n, int k)
{
    int first = FirstOccurence(arr, n, k);

    if (first == -1)
        return 0;

    int last = LastOccurence(arr, n, k);

    return last - first + 1;
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

    cout << CountOccurences(arr, n, target);

    return 0;
}