// Two sum problem better solution

#include <bits/stdc++.h>
using namespace std;

void twoSumBetterOrderedMap(vector<int> &a, int k)
{
    map<int, int> mp; // ordered map: value -> index
    bool found = false;

    for (int i = 0; i < a.size(); i++)
    {
        int complement = k - a[i];
        if (mp.find(complement) != mp.end())
        {
            cout << "Pair found at indices " << mp[complement] << " and " << i
                 << " (" << complement << " + " << a[i] << " = " << k << ")" << endl;
            found = true;
        }
        mp[a[i]] = i;
    }

    if (!found)
    {
        cout << "No such pair exists." << endl;
    }
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

    twoSumBetterOrderedMap(a, k);

    return 0;
}
