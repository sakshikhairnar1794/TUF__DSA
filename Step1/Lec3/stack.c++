#include <bits/stdc++.h>
using namespace std;
void explainStack()
{
    stack<int> st;
    st.push(1);    //{1}
    st.push(2);    //{2,1}
    st.push(3);    //{3,2,1}
    st.push(4);    //{4,3,2,1}
    st.emplace(5); //{5,4,3,2,1}
    cout << endl;
    cout << st.top(); // 5
    cout << endl;

    st.pop(); // {4,3,2,1}

    cout << st.size(); // 4
    cout << endl;
    stack<int> st1, st2;
    st1.swap(st2); // stacks are swapped
}
int main()
{
    explainStack();
}