#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number: ";
    cin >> n;

    if (n <= 1) {
        cout << "No Prime Factor";
        return 0;
    }

    for (int i = 2; i <= n; i++) {

        if (n % i == 0) {
            cout << "Smallest Prime Factor = " << i;
            break;
        }
    }

    return 0;
}