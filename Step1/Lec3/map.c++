#include <bits/stdc++.h>
using namespace std;

void explainMap()
{
    map<int, int> mp;
    map<int, pair<int, int>> mp2;
    map<pair<int, int>, int> mp1;

    mp[1] = 2;
    mp.emplace(3, 1);
    mp.insert({6, 7});
    mp2[4] = {5, 6};
    mp1[{2, 3}] = 7;

    for (auto p : mp)
        cout << "mp[" << p.first << "] = " << p.second << endl;

    for (auto p : mp2)
        cout << "mp2[" << p.first << "] = {" << p.second.first << ", " << p.second.second << "}" << endl;

    for (auto p : mp1)
        cout << "mp1[{" << p.first.first << ", " << p.first.second << "}] = " << p.second << endl;

    auto it1 = mp.find(3);
    if (it1 != mp.end())
        cout << "Value at key 3: " << it1->second << endl;
    else
        cout << "Key 3 not found" << endl;

    auto it2 = mp.find(8);
    if (it2 != mp.end())
        cout << "Value at key 8: " << it2->second << endl;
    else
        cout << "Key 8 not found" << endl;

    auto it3 = mp.lower_bound(1);
    if (it3 != mp.end())
        cout << "Lower bound : key = " << it3->first << ", value = " << it3->second << endl;
    else
        cout << "Lower bound not found" << endl;

    auto it4 = mp.upper_bound(3);
    if (it4 != mp.end())
        cout << "Upper bound : key = " << it4->first << ", value = " << it4->second << endl;
    else
        cout << "Upper bound not found" << endl;
}

int main()
{
    explainMap();
}
