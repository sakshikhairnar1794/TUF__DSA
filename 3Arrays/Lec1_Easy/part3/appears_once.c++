// Find thenumber that appears once and others twice

// Maximum consecutive ones

#include <bits/stdc++.h>
using namespace std;
int appears_once(int a[], int n)
{
    int xor1 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ a[i];
    }
    return xor1;
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
    int result = appears_once(a, n);
    cout << "The number that appears once is :" << result << endl;
}