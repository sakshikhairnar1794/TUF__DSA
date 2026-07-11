#include <iostream>
using namespace std;

int minBitFlipsOptimal(int start, int goal) {

    int x = start ^ goal;
    int count = 0;

    while (x) {

        x = x & (x - 1);
        count++;
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
         << minBitFlipsOptimal(start, goal);

    return 0;
}