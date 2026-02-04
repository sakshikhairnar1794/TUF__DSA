// Move zeros to end Optimal solution

#include <bits/stdc++.h>
using namespace std;

vector<int> movezero(int n, vector<int> a)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return a;

    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
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