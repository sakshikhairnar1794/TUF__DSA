#include <iostream>
using namespace std;
class Solution
{
public:
    void printNumber(int x)
    {
        cout << x;
    }
};
int main()
{
    Solution s;
    int x;
    cout << "Enter a number" << endl;
    cin >> x;
    s.printNumber(x);
    return 0;
}