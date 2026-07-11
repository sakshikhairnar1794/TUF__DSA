#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    cout << "Before swapping: " << a << " " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping: " << a << " " << b << endl;

    return 0;
}