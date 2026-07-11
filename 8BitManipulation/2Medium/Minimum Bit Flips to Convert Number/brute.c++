#include <iostream>
using namespace std;

int minBitFlipsBrute(int start, int goal) {
    int count = 0;

    while (start > 0 || goal > 0) {

        int bit1 = start & 1;
        int bit2 = goal & 1;

        if (bit1 != bit2)
            count++;

        start >>= 1;
        goal >>= 1;
    }

    return count;
}

int main() {

    int start, goal;

    cout << "Enter start number: ";
    cin >> start;

    cout << "Enter goal number: ";
    cin >> goal;

    cout << "Minimum Bit Flips = "
         << minBitFlipsBrute(start, goal);

    return 0;
}