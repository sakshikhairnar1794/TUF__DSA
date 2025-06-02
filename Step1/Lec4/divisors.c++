#include <bits/stdc++.h>
using namespace std;

void divisors(int n)
{
    vector<int> ls;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if (i != n / i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
    {
        cout << it << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    cout << "Divisors are:" << endl;
    divisors(n);
}
