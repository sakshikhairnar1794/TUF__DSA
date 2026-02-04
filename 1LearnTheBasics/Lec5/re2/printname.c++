/*
#include <iostream>
using namespace std;

int cnt = 0;

void printname(int n)
{
    if (cnt >= n)
    {
        return;
    }
    cout << "Sakshi" << endl;
    cnt++;
    printname(n);
}
int main()
{
    int n;
    cout << "Enter the number of times:";
    cin >> n;
    printname(n);
}
*/

#include <iostream>
using namespace std;

void f(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << "Sakshi" << endl;

    f(i + 1, n);
}
int main()
{
    cout << "Enter the no of times to be printed:";
    cout << endl;
    int n;
    cin >> n;
    f(1, n);
}