#include <iostream>
using namespace std;

int rangeXORBrute(int L, int R) {

    int ans = 0;

    for (int i = L; i <= R; i++) {
        ans ^= i;
    }

    return ans;
}

int main() {

    int L, R;

    cout << "Enter L and R: ";
    cin >> L >> R;

    cout << "Range XOR = "
         << rangeXORBrute(L, R);

    return 0;
}