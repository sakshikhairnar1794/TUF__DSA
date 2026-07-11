#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 13;      // 1101
    int i = 2;

    vector<int> binary;

    while (n > 0) {
        binary.push_back(n % 2);
        n /= 2;
    }

    while (binary.size() <= i)
        binary.push_back(0);

    binary[i] = 1 - binary[i];

    for (int j = binary.size() - 1; j >= 0; j--)
        cout << binary[j];

    return 0;
}