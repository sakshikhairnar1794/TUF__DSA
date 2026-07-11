#include <iostream>
using namespace std;

int main() {
    int n = 10;   // 1010
    int i = 2;

    n = n | (1 << i);

    cout << n;

    return 0;
}