// Search Peak element in array

#include <bits/stdc++.h>
using namespace std;

int PeakElement(vector<int> &arr, int n)
{
    n = arr.size();

    if (n == 1)
        return arr[0];

    if (arr[0] > arr[1])
        return arr[0];

    if (arr[n - 1] > arr[n - 2])
        return arr[n - 1];

    int low = 1, high = n - 2;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Single element found
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }

        else if(arr[mid] > arr[mid-1]){
            low = mid + 1;
        }
        else if(arr[mid] > arr[mid+1]){ // if this line is leiminated it works for multiple peaks
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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << PeakElement(arr, n) << endl;

    return 0;
}