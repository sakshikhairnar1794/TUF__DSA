
#include <iostream>
using namespace std;

void f(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << i << endl;

    f(i + 1, n);
}
int main()
{
    cout << "Enter till number to be printed";
    cout << endl;
    int n;
    cin >> n;
    f(1, n);
}