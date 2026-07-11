#include <iostream>
using namespace std;

int main() {
    int Num = 13;
    int count = 0;

    while (Num != 0) {
        Num = Num & (Num - 1);
        count++;
    }

    cout << count;

    return 0;
}