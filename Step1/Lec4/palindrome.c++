#include <bits/stdc++.h>
using namespace std;

void palindrome(int n)
{
    int dup = n;
    int rev_no = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        rev_no = (rev_no * 10) + ld;
    }

    if (rev_no == dup)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the no:" << endl;
    cin >> n;
    palindrome(n);
}