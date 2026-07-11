#include <iostream>
using namespace std;

int main() {
    int Num = 13;

    if ((Num & 1) == 1)
        cout << "Odd";
    else
        cout << "Even";

    return 0;
}