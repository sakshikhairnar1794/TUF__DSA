#include <bits/stdc++.h>
using namespace std;

void explainMultiSet()
{
    multiset<int> ms;
    ms.insert(5);   // {5}
    ms.insert(2);   // {2, 5}
    ms.insert(2);   // {2, 2, 5}
    ms.insert(8);   // {2, 2, 5, 8}
    ms.emplace(10); // {2, 2, 5, 8, 10}
    ms.insert(3);   // {2, 2, 3, 5, 8, 10}

    int cnt = ms.count(2); // counts how many times 2 appears => 2

    ms.erase(ms.find(2)); // deletes only one occurrence of 2
    // Now ms = {2, 3, 5, 8, 10}

    // BAD: ms.find(1) returns ms.end() (since 1 is not present)
    // Better: Erase a valid range. For example:

    auto it1 = ms.find(2); // points to 2
    auto it2 = ms.find(5); // points to 5
    ms.erase(it1, it2);    // removes elements in [2, 5), i.e., 2 and 3

    // Final multiset: {5, 8, 10}
}

int main()
{
    explainMultiSet();
}
