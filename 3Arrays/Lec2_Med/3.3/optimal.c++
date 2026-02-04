#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v, int n)
{
    int count = 1;
    int el;
    for (int i = 0; i < v.size(); i++)
    {
        if (count == 0)
        {
            count = 1;
            el = v[i];
        }
        else if (v[i] == el)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int count1 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (el == v[i])
        {
            count1++;
        }
        if (count1 > (v.size() / 2))
        {
            return el;
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

    int result = majorityElement(arr, n);
    if (result != -1)
        cout << "Majority element is: " << result << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}
