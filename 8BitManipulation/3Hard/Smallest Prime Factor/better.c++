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

    bool found = false;

    for (int i = 2; i * i <= n; i++) {

        if (n % i == 0) {
            cout << "Smallest Prime Factor = " << i;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Smallest Prime Factor = " << n;

    return 0;
}