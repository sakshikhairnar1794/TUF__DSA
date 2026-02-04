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

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[a[i]]++;
    }
    // stores in osrted order
    //  for (auto it : mpp)
    //  {
    //      cout << it.first << "-> " << it.second << endl;
    //  }
    int q;
    cout << "Enter the number of elements to be checked:" << endl;
    cin >> q;
    int no;
    cout << "Enter the elements ";
    while (q--)

    {
        cin >> no;

        // fetch
        cout << mpp[no] << endl;
    }

    return 0;
}