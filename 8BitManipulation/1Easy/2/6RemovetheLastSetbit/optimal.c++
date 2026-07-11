#include <iostream>
using namespace std;

int main() {
    int Num = 12;   // 1100

    Num = Num & (Num - 1);

    cout << Num;

    return 0;
}