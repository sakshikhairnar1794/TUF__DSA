// #include <bits/stdc++.h>
// using namespace std;

// void primeno(int n)
// {

//     int count = 0;
//     for (int i = 1; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             count++;
//         }
//         if ((n / i) != i)
//         {
//             count++;
//         }
//     }
//     if (count = 2)
//     {
//         cout << "Non prime no";
//     }
//     else if (count == 1)
//     {
//         cout << "Nor prime nor composite";
//     }
//     else
//     {
//         cout << "Prime number";
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the number :" << endl;
//     cin >> n;
//     primeno(n);
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no:" << endl;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;

            if ((n / i) != i)
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}