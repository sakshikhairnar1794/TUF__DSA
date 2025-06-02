#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input array
    string s;
    cout << "Enter the string " << endl;
    cin >> s;

    // precomputation

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] += 1;
    }

    int q;
    cout << "Enter the no of character to be found: " << endl;
    cin >> q;
    cout << "Enter the character you wan to check:" << endl;
    while (q--)
    {
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'a'] << endl;
    }

    return 0;
}