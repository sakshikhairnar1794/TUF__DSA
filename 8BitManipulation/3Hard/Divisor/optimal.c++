
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    vector<int> divisors;

    for (int i = 1; i <= sqrt(n); i++) {

        if (n % i == 0) {

            divisors.push_back(i);

            if (i != n / i)
                divisors.push_back(n / i);
        }
    }

    sort(divisors.begin(), divisors.end());

    cout << "Divisors are: ";

    for (int x : divisors)
        cout << x << " ";

    return 0;
}