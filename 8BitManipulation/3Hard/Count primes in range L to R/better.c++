#include <iostream>
#include <vector>
using namespace std;

int main() {

    int L, R;

    cout << "Enter L and R: ";
    cin >> L >> R;

    vector<bool> prime(R + 1, true);

    if (R >= 0) prime[0] = false;
    if (R >= 1) prime[1] = false;

    for (int i = 2; i * i <= R; i++) {

        if (prime[i]) {

            for (int j = i * i; j <= R; j += i)
                prime[j] = false;
        }
    }

    int count = 0;

    for (int i = L; i <= R; i++) {

        if (prime[i])
            count++;
    }

    cout << "Prime Count = " << count;

    return 0;
}