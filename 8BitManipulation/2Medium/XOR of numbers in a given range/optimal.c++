#include <iostream>
using namespace std;

int xorTillN(int n) {

    if (n % 4 == 0)
        return n;

    if (n % 4 == 1)
        return 1;

    if (n % 4 == 2)
        return n + 1;

    return 0;
}

int rangeXOROptimal(int L, int R) {

    return xorTillN(R) ^ xorTillN(L - 1);
}

int main() {

    int L, R;

    cout << "Enter L and R: ";
    cin >> L >> R;

    cout << "Range XOR = "
         << rangeXOROptimal(L, R);

    return 0;
}