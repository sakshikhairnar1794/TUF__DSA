#include <bits/stdc++.h>
using namespace std;

int getlongestsubarray(vector<int> &a, int k)
{
    int left = 0, right = 0;
    int n = a.size();
    long long sum = 0;
    int maxlen = 0;

    while (right < n)
    {
        sum += a[right];

        // Shrink window from the left if sum exceeds k
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }

        // Update maxlen if current window's sum equals k
        if (sum == k)
        {
            maxlen = max(maxlen, right - left + 1);
        }

        right++;
    }

    return maxlen;
}

int main()
{
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the value of k (target sum): ";
    cin >> k;

    int result = getlongestsubarray(a, k);
    cout << "Length of longest subarray with sum " << k << " is: " << result << endl;

    return 0;
}
