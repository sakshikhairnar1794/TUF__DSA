#include <bits/stdc++.h>
using namespace std;
void explainPriorityQueue()
{
    priority_queue<int> pq;
    pq.push(5);     //{5}
    pq.push(2);     //{5,2}
    pq.push(8);     //{8,5,2}
    pq.emplace(10); //{10,8,5,2}
    pq.push(3);     //{10,8,5,3,2}
    cout << endl;

    cout << pq.top(); // 10
    cout << endl;

    pq.pop(); // {8,5,3,2}

    cout << pq.size(); // 4
    cout << endl;
    queue<int> pq1, pq2;
    pq1.swap(pq2); // Priority queues are swapped

    // Minimum Heap

    priority_queue<int, vector<int>, greater<int>> p;
    p.push(5);     //{5}
    p.push(2);     //{2,5}
    p.push(8);     //{2,5,8}
    p.emplace(10); //{2,5,8,10}

    cout << p.top(); // 2
}
int main()
{
    explainPriorityQueue();
}