// Parametrized code doesnt return anyting just prints

#include <iostream>
using namespace std;
void sumn(int i, int sum)
{
    if (i < 1)
    {
        cout << "Sum is: " << sum;
        return;
    }
    sumn(i - 1, sum + i);
}
int main()
{
    int n;
    cout << "Enter the no:" << endl;
    cin >> n;
    sumn(n, 0);
}