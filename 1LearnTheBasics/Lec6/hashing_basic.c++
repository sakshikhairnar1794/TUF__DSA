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

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[a[i]] += 1;
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
        cout << hash[no] << endl;
    }

    return 0;
}