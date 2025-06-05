// Missing numbers in an array

#include <bits/stdc++.h>
using namespace std;
int missingnumbers(int a[], int N)
{
    int xor1 = 0, xor2 = 0;
    int n = N - 1;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
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
    int result = missingnumbers(a, n);
    cout << "missing number is :" << result << endl;
}