#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 13;
    int i = 2;

    vector<int> binary;

    while (n > 0) {
        binary.push_back(n % 2);
        n /= 2;
    }

    if (i < binary.size() && binary[i] == 1)
        cout << "Bit is SET";
    else
        cout << "Bit is NOT SET";

    return 0;
}