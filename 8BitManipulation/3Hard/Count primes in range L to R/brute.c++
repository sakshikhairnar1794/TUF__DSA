#include <iostream>
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

    int L, R;

    cout << "Enter L and R: ";
    cin >> L >> R;

    int count = 0;

    for (int i = L; i <= R; i++) {

        if (isPrime(i))
            count++;
    }

    cout << "Prime Count = " << count;

    return 0;
}