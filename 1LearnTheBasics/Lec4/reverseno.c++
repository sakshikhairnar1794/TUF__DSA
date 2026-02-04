#include <bits/stdc++.h>
using namespace std;

int reverseno(int n)
{
    int rev_no = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        rev_no = (rev_no * 10) + ld;
    }
    return rev_no;
}

int main()
{

    int n;
    cout << "Enter the no:" << endl;
    cin >> n;
    cout << reverseno(n);
}