// Using Binary Search

#include <bits/stdc++.h>
using namespace std;

int FirstOccurence(vector<int> &arr, int n, int k)
{
    int low = 0;
    int high = n - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
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
    int low = 0;
    int high = n - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
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

pair<int, int> FirstAndLastPosition(vector<int> &arr, int n, int k){
    int first = FirstOccurence(arr, n, k);
    if(first == -1) return {-1, -1};
    int last = LastOccurence(arr, n, k);
    return {first, last};
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

    pair<int, int> ans = FirstAndLastPosition(arr, n, target);

    cout << ans.first << " " << ans.second << endl;

    return 0;
}