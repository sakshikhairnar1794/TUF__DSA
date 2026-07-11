#include <iostream>
#include <string>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0) {
        cout << "Binary = 0";
        return 0;
    }

    string binary = "";

    while (decimal > 0) {
        binary = char((decimal % 2) + '0') + binary;
        decimal /= 2;
    }

    cout << "Binary = " << binary << endl;

    return 0;
}