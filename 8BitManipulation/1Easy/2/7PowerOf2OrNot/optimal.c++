#include <iostream>
using namespace std;

int main() {
    int Num = 16;

    if (Num > 0 && (Num & (Num - 1)) == 0)
        cout << "Power of 2";
    else
        cout << "Not a Power of 2";

    return 0;
}