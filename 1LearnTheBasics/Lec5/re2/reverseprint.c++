
#include <iostream>
using namespace std;

void f(int i, int n)
{
    if (i < 1)
    {
        return;
    }

    cout << i << endl;

    f(i - 1, n);
}
int main()
{
    cout << "Enter from number to be printed";
    cout << endl;
    int n;
    cin >> n;
    f(n, n);
}