#include <bits/stdc++.h>
using namespace std;

void explainDequeue()
{
    deque<int> dq;
    dq.push_back(2);
    for (auto it : dq)
    {
        cout << it << " " << endl;
    }
    cout << endl;
    dq.emplace_back(4);
    for (auto it : dq)
    {
        cout << it << " " << endl;
    }
    cout << endl;

    dq.push_front(5);
    for (auto it : dq)
    {
        cout << it << " " << endl;
    }
    cout << endl;
    dq.push_back(6);
    for (auto it : dq)
    {
        cout << it << " " << endl;
    }
    cout << endl;

    dq.pop_back();
    for (auto it : dq)
    {
        cout << it << " " << endl;
    }
    cout << endl;
    dq.pop_front();
    for (auto it : dq)
    {
        cout << it << " " << endl;
    }
    cout << endl;

    cout << dq.back() << endl;

    cout << endl;

    cout << dq.front() << endl;

    cout << endl;

    for (auto it : dq)
    {
        cout << it << " " << endl;
    }
    cout << endl;
}
int main()
{
    explainDequeue();
}