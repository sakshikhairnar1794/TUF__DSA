#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangearrayelebysize(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, 0);
    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the array elements which have same positivw and -ve integers" << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = rearrangearrayelebysize(arr);

    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}