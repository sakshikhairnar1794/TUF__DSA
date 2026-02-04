// Majority element

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v)
{
    map<int, int> mpp;
    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > v.size() / 2)
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array elements (can be any integers):" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = majorityElement(arr);
    if (result != -1)
        cout << "Majority element is: " << result << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}
