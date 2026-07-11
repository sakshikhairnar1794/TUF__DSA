#include <iostream>
using namespace std;

int main() {
    int Num = 13;
    int count = 0;

    while (Num > 0) {
        if ((Num & 1) == 1)
            count++;

        Num = Num >> 1;
    }

    cout << count;

    return 0;
}