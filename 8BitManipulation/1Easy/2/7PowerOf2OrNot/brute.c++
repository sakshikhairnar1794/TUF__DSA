#include <iostream>
#include <vector>
using namespace std;

int main() {
    int Num = 16;
    vector<int> binary;

    while (Num > 0) {
        binary.push_back(Num % 2);
        Num /= 2;
    }

    int count = 0;

    for (int bit : binary) {
        if (bit == 1)
            count++;
    }

    if (count == 1)
        cout << "Power of 2";
    else
        cout << "Not a Power of 2";

    return 0;
}