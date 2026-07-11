#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int n = binary.length();

    for (int i = 0; i < n; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, n - i - 1);
        }
    }

    cout << "Decimal = " << decimal << endl;

    return 0;
}