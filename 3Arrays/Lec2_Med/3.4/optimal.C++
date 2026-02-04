#include <bits/stdc++.h>
using namespace std;

long long kadanesAlgo(int arr[], int n)
{
    long long sum = 0;
    long long maxi = LONG_LONG_MIN;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];

        if (sum > maxi)
        {
            maxi = sum;
        }

        if (sum < 0)
        {
            sum = 0;
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

    cout << "Maximum subarray sum is: " << kadanesAlgo(arr, n) << endl;

    return 0;
}
