#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {

    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {

    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Prime Factors: ";

    for (int i = 2; i * i <= n; i++) {

        if (n % i == 0) {

            if (isPrime(i))
                cout << i << " ";

            if (n / i != i && isPrime(n / i))
                cout << n / i << " ";
        }
    }

    return 0;
}