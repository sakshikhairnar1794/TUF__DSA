#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input array
    int n;
    cout << "Enter the no of array elements: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // precomputation
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[a[i]]++;
    }

    int q;
    cout << "Enter the number of elements to be checked:" << endl;
    cin >> q;
    int no;
    cout << "Enter the elements ";
    while (q--)
    {
        cin >> no;
        // fetch
        cout << mpp[no] << endl;
    }

    // Finding highest and lowest frequency elements
    int maxFreq = INT_MIN, minFreq = INT_MAX;
    vector<int> maxElements, minElements;

    for (auto it : mpp)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            maxElements = {it.first};
        }
        else if (it.second == maxFreq)
        {
            maxElements.push_back(it.first);
        }

        if (it.second < minFreq)
        {
            minFreq = it.second;
            minElements = {it.first};
        }
        else if (it.second == minFreq)
        {
            minElements.push_back(it.first);
        }
    }

    cout << "Element(s) with highest frequency (" << maxFreq << "): ";
    for (int el : maxElements)
        cout << el << " ";
    cout << endl;

    cout << "Element(s) with lowest frequency (" << minFreq << "): ";
    for (int el : minElements)
        cout << el << " ";
    cout << endl;

    return 0;
}
