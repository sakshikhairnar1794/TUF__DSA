#include <iostream>
#include <vector>
using namespace std;

int main() {
    int Num = 13;
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

    cout << count;

    return 0;
}