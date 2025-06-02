#include <iostream>
using namespace std;

void backtrackingPrint(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    backtrackingPrint(i - 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    backtrackingPrint(n, n);
}