#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
    vector<int> v;
    v.push_back(2);
    v.emplace_back(3);

    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    v.emplace_back(7);
    cout << v[0] << endl;     // 2
    cout << v.at(1) << endl;  // 3
    cout << v.back() << endl; // 3

    vector<pair<int, int>> vec;
    vec.push_back({6, 7});
    vec.emplace_back(8, 9);

    vector<int> v1(5);
    for (int i = 0; i < 5; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    vector<int> v2(5, 100);
    for (int i = 0; i < 5; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    vector<int> v3(v2);
    for (int i = 0; i < 5; i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    vector<int>::iterator itb = v.begin();
    itb++;
    cout << *(itb) << " " << endl;

    vector<int>::iterator ite = v.end();
    ite--;
    cout << *(ite) << " " << endl;

    vector<int>::reverse_iterator itre = v.rend();
    cout << *(itre) << " " << endl;
    itre--;
    cout << *(itre) << " " << endl;

    vector<int>::reverse_iterator itbe = v.rbegin();
    cout << *(itbe) << " " << endl;
    itbe++;
    cout << *(itbe) << " " << endl;

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " " << endl;
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }
    for (auto it : v)
    {
        cout << (it) << endl;
    }
    // delete
    v.erase(v.begin());
    v.erase(v.begin() + 2, v.erase(v.begin() + 4));

    v.insert(v.begin(), 1, 10);

    // copying
    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());

    cout << v.size();

    // swapping
    vector<int> v1 = {10, 20};
    vector<int> v2 = {30, 40};
    v1.swap(v2);

    // size

    cout << v.size();

    // clear

    v.clear();

    // Shows true or false

    cout << " Is the vector empty ? 1 for true , 0 for false :" << v.empty();
}
int main()
{
    explainVector();
}