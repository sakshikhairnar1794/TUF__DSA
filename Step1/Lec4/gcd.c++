#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    return a;
}
int main()
{
    int a, b;
    cout << "Enter two no:" << endl;
    cin >> a >> b;

    cout << "GCD is:" << gcd(a, b);
}