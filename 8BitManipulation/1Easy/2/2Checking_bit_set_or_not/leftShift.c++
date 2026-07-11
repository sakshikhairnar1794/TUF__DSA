#include <iostream>
using namespace std;

int main() {
    int n = 13;
    int i = 2;

    if (n & (1 << i))
        cout << "Bit is SET";
    else
        cout << "Bit is NOT SET";

    return 0;
}