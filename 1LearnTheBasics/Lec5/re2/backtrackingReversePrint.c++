#include <iostream>
using namespace std;

void backtrackingReversePrint(int i, int n)
{
    if (i > n)
    {
        return;
    }
    backtrackingReversePrint(i + 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    backtrackingReversePrint(1, n);
}