#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = fibonacci(n - 1);
    int secondlast = fibonacci(n - 2);
    return last + secondlast;
    // can be done as
    // return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cout << "Enter a number :" << endl;
    cin >> n;
    cout << fibonacci(n);
}