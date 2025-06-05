// Move zeros to end brute force solution

#include <bits/stdc++.h>
using namespace std;

vector<int> movezero(int n, vector<int> a)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            temp.push_back(a[i]);
        }
    }
    int nz = temp.size();
    for (int i = 0; i < nz; i++)
    {
        a[i] = temp[i];
    }
    for (int i = nz; i < n; i++)
    {
        a[i] = 0;
    }
    return a;
}

int main()
{
    int n;
    cout << "Enter the no of array elements: " << endl;
    cin >> n;
    cout << "Enter the elements :" << endl;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> result = movezero(n, a);
    cout << "array after moving zeros to the end:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
}