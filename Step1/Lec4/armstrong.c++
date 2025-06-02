#include <bits/stdc++.h>
using namespace std;

void armstrong(int n)
{
    int sum = 0;
    int dup = n;
    int count = 0;

    // Count the number of digits
    int temp = n;
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    // Calculate the sum of each digit raised to the power 'count'
    temp = n;
    while (temp > 0)
    {
        int ld = temp % 10;
        sum = sum + pow(ld, count);
        temp = temp / 10;
    }

    if (dup == sum)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not an armstrong number";
    }
}

int main()
{
    int n;
    cout << "Enter the number to be checked:" << endl;
    cin >> n;
    armstrong(n);
}
