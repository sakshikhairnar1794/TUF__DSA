// Print subarray with maximum subarray sum(extended version of above problem)

#include <bits/stdc++.h>
using namespace std;

long long kadanesAlgo(int arr[], int n, int &start, int &end)
{
    long long sum = 0;
    long long maxi = LONG_LONG_MIN;
    int tempStart = 0;
    start = 0;
    end = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;
            start = tempStart;
            end = i;
        }

        if (sum < 0)
        {
            sum = 0;
            tempStart = i + 1;
        }
    }

    return maxi;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start, end;
    long long maxSum = kadanesAlgo(arr, n, start, end);

    cout << "Maximum subarray sum is: " << maxSum << endl;
    cout << "Subarray with maximum sum is: ";
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
