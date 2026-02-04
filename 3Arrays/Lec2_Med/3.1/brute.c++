// Two sum problem bruteforce

#include <bits/stdc++.h>
using namespace std;

void twoSumBruteForce(vector<int> &a, int k)
{
    int n = a.size();
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
            {
                cout << "Pair found at indices " << i << " and " << j
                     << " (" << a[i] << " + " << a[j] << " = " << k << ")" << endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "No such pair exists." << endl;
    }
}

int main()
{
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter target to be found: ";
    cin >> k;

    twoSumBruteForce(a, k);

    return 0;
}
