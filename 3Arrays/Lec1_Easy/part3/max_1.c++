// Maximum consecutive ones

#include <bits/stdc++.h>
using namespace std;
int max_consecutive_ones(int a[], int n)
{
    int maxi = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxi;
}

int main()
{
    int n;
    cout << "Enter the no of array elements: " << endl;
    cin >> n;
    cout << "Enter the elements :" << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int result = max_consecutive_ones(a, n);
    cout << "number of max consecutive 1 are :" << result << endl;
}