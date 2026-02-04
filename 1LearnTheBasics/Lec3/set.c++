#include <bits/stdc++.h>
using namespace std;

void explainSet()
{
    set<int> st;
    st.insert(5);   // {5}
    st.insert(2);   // {2, 5}
    st.insert(8);   // {2, 5, 8}
    st.emplace(10); // {2, 5, 8, 10}
    st.insert(3);   // {2, 3, 5, 8, 10}

    // Find 3 in the set
    auto it1 = st.find(3); // it1 points to 3

    // Try to find 6 (not present)
    auto it2 = st.find(6); // it2 == st.end()

    st.erase(5); // Removes 5 from the set: {2, 3, 8, 10}

    // Check if 1 is in the set (returns 0 or 1)
    int cnt = st.count(1); // cnt = 0

    // Erase element 3 using iterator
    auto it3 = st.find(3);
    if (it3 != st.end())
        st.erase(it3); // {2, 8, 10}

    // Erase elements in range [2, 4)
    auto it4 = st.find(2);
    auto it5 = st.find(4); // Since 4 isn't in set, this returns st.upper_bound(3)
    st.erase(it4, it5);    // Removes 2 → {8, 10}

    // Upper bound of 2 (first element > 2)
    auto ub = st.upper_bound(2); // points to 8

    // Lower bound of 3 (first element >= 3)
    auto lb = st.lower_bound(3); // points to 8
}

int main()
{
    explainSet();
}
