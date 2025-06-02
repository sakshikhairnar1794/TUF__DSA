#include <bits/stdc++.h>
using namespace std;
void explainQueue()
{
    queue<int> q;
    q.push(1);    //{1}
    q.push(2);    //{1,2}
    q.push(3);    //{1,2,3}
    q.push(4);    //{1,2,3,4}
    q.emplace(5); //{1,2,3,4,5}
    cout << endl;

    q.back() += 5;
    cout << q.back() << endl; // 10
    cout << q.front();        // 1
    cout << endl;

    q.pop(); // {2,3,4,5}

    cout << q.size(); // 4
    cout << endl;
    queue<int> q1, q2;
    q1.swap(q2); // queues are swapped
}
int main()
{
    explainQueue();
}