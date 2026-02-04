// longest subarray with sum k in an array better solution

#include <bits/stdc++.h>
using namespace std;
int getlongestsubarray(vector<int> &a, int k)
{
    map<long long, int> presummap;
    long long sum = 0;
    int maxlen = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum = sum + a[i];
        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }
        long long rem = sum - k;
        if (presummap.find(rem) != presummap.end())
        {
            int len = i - presummap[rem];
            maxlen = max(maxlen, len);
        }
        if (presummap.find(sum) == presummap.end())
            presummap[sum] = i;
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
