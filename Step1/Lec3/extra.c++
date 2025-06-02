#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second > p2.second)
    {
        return false;
    }
    if (p1.second < p2.second)
    {
        return true;
    }

    // otherwise p1 and p2 will be same
    if (p1.first > p2.first)
    {
        return true;
    }
    return false;
}

void explainExtra()
{
    int n = 5;
    int a[] = {5, 1, 4, 2, 3};

    sort(a, a + n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    sort(a + 2, a + 4);
    cout << "Partially sorted (a+2 to a+4): ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    sort(a, a + n, greater<int>());
    cout << "Descending sort: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    pair<int, int> pairs[] = {{1, 2}, {2, 1}, {4, 1}};
    int pairSize = sizeof(pairs) / sizeof(pairs[0]);

    sort(pairs, pairs + pairSize, comp);
    cout << "Sorted pairs: ";
    for (int i = 0; i < pairSize; i++)
        cout << "{" << pairs[i].first << "," << pairs[i].second << "} ";
    cout << endl;

    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << "Popcount of 7: " << cnt << endl;

    long long num2 = 3453765437612873649;
    int cnt2 = __builtin_popcountll(num2);
    cout << "Popcount of num2: " << cnt2 << endl;

    string s = "123";
    cout << "Permutations of '123':\n";
    sort(s.begin(), s.end()); // If this line is not written and the characters are not sorted initially, next_permutation will not generate all permutations in lexicographic order

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
    int mini = *min_element(a, a + n);
    cout << "Max: " << maxi << ", Min: " << mini << endl;
}

int main()
{
    explainExtra();
    return 0;
}
