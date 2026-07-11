#include <iostream>
using namespace std;

int xorTillNOptimal(int n) {

    if (n % 4 == 0)
        return n;

    if (n % 4 == 1)
        return 1;

    if (n % 4 == 2)
        return n + 1;

    return 0;
}

int main() {

    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "XOR from 1 to " << n << " = "
         << xorTillNOptimal(n);

    return 0;
}