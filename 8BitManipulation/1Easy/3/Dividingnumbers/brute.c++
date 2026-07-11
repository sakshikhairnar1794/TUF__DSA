#include <iostream>
using namespace std;

int main() {
    int dividend = 20;
    int divisor = 4;

    int quotient = 0;

    while (dividend >= divisor) {
        dividend = dividend - divisor;
        quotient++;
    }

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << dividend << endl;

    return 0;
}