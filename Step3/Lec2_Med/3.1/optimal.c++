// Two sum problem optimal solution
#include <bits/stdc++.h>
using namespace std;

bool twoSumOptimalNoMap(vector<int> &a, int k)
{
    int n = a.size();

    // Store value and original index to recover indices after sorting
    vector<pair<int, int>> temp;
    for (int i = 0; i < n; i++)
        temp.push_back({a[i], i});

    sort(temp.begin(), temp.end()); // sort by value

    int left = 0, right = n - 1;
    while (left < right)
    {
        int sum = temp[left].first + temp[right].first;
        if (sum == k)
        {
            cout << "Pair found at original indices " << temp[left].second
                 << " and " << temp[right].second
                 << " (" << temp[left].first << " + " << temp[right].first << " = " << k << ")" << endl;
            return true;
        }
        else if (sum < k)
            left++;
        else
            right--;
    }

    cout << "No such pair exists." << endl;
    return false;
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

    cout << "Enter target to be found: ";
    cin >> k;

    twoSumOptimalNoMap(a, k);

    return 0;
}
