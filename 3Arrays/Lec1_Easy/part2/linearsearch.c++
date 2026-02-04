// Linear search
#include <bits/stdc++.h>
using namespace std;
int linearSearch(int a[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            return i;
        }
    }
    return -1;
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
    int num;
    cout << "Enter the number to be searched :";
    cin >> num;
    int result = linearSearch(a, n, num);
    if (result == -1)
    {
        cout << "Element not present";
    }
    else
    {
        cout << "Element found :" << result;
    }
}