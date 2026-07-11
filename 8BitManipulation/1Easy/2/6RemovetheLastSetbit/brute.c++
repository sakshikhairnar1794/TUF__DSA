#include <iostream>
using namespace std;

int main() {
    int Num = 13;   // 1101

    for (int i = 0; i < 32; i++) {
        if ((Num & (1 << i)) != 0) {
            Num = Num & (~(1 << i));   // Clear the first set bit found
            break;
        }
    }

    cout << Num;

    return 0;
}