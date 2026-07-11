#include <iostream>
using namespace std;

int xorTillNBrute(int n) {

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        ans ^= i;
    }

    return ans;
}

int main() {

    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "XOR from 1 to " << n << " = "
         << xorTillNBrute(n);

    return 0;
}