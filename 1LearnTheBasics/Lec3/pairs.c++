#include <iostream>
using namespace std;

void explainpairs()
{
    pair<int, int> p = {2, 3};
    cout << p.first << " " << p.second << endl;

    // Output -> 2,3

    pair<int, pair<int, int>> p1 = {4, {5, 6}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    // Output -> 4,5,6
    pair<int, int> arr[] = {{7, 8}, {9, 10}, {11, 12}};
    cout << arr[1].second << endl;

    // Output -> 10
}
int main()
{
    explainpairs();
    return 0;
}