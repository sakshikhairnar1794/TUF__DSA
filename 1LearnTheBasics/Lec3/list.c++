#include <bits/stdc++.h>
using namespace std;

void explainList()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    ls.push_back(6);

    for (auto it : ls)
    {
        cout << it << " ";
    }
}

// all rest functions are same as vector
int main()
{
    explainList();
}